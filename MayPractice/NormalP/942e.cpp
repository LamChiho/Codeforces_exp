using namespace std;
#include <iostream>
#include <string.h>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include <queue>
#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <string_view>

int mod=998244353;
vector<long long>inv(31,1);

void solve(){
    long long n,iptn,k,calcv;
    cin>>n>>k;
    vector<long long>vc(n+1);
    for(int i=1;i<=n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    int origp,nap,cd;
    for(int i=1;i<=n;i++){
        iptn = (i&(-i));
        cd=1;
        origp = i+iptn;
        calcv = vc[i];
        while((origp)<=n){
            calcv*=(k+cd-1);
            calcv%=mod;
            calcv*=inv[cd];
            calcv%=mod;
            vc[origp]-=calcv;
            vc[origp]%=mod;
            if(vc[origp]<0){
                vc[origp]+=mod;
            }
            nap = (origp&(-origp));
            origp+=nap;
            cd++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<vc[i]<<' ';
    }
    cout<<"\n";
    return;
}


int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    long long calc;
    for(int i=2;i<31;i++){
        calc = mod+1;
        for(int a=1;a<=i;a++){
            calc += mod;
            if((calc%i)==0){
                inv[i]=((calc/i))%mod;
                break;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}