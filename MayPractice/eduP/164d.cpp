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
#include<cmath>
typedef long long ll; // 使用 typedef 创建别名
using namespace std;


ll mod=998244353;

void solve() {
    ll n,ans=0,cc;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    sort(vc.begin(),vc.end());
    vector<ll>curs(5001,0);
    curs[0]++;
    for(ll num:vc){
        for(int j=(5000-num);j>-1;j--){
            if(curs[j]>0){
                if(num>j){
                    cc = num;
                    cc*=curs[j];
                    cc%=mod;
                    ans+=cc;
                    ans%=mod;
                }
                else{
                    cc = ((num+j)/2)+((num+j)%2);
                    cc*=curs[j];
                    cc%=mod;
                    ans+=cc;
                    ans%=mod;
                }
                curs[j+num]+=curs[j];
                curs[j+num]%=mod;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    //cin >> t;

    for (int i = 0; i < 1; i++) {
        solve();
    }
}