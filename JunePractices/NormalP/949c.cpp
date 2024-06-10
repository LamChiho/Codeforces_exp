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
ll mod = 998244353;

void solve() {
    int n,nz=0,lp=-1,ptn,n1,n2,rl,lfp,rp,mul2;
    cin>>n;
    //cout<<n<<"size\n";
    vector<int>vc(n);
    //cout<<n<<"Asize\n";
    for(int i=0;i<n;i++){
        cin>>vc[i];
        if(vc[i]>-1)nz++;
    }
    //cout<<nz<<"bc\n";
    if(nz==0){
        nz=1;
        for(int i=0;i<n;i++){
            cout<<nz<<' ';
            if(nz==1)nz*=2;
            else nz/=2;

        }
        cout<<"\n";
        return;
    }
    //cout<<"abcd\n";
    for(int i=0;i<n;i++){
        if(vc[i]>-1){
            //cout<<i<<"\n";
            if(lp==-1){
                ptn = vc[i];
                for(int j=i-1;j>-1;j--){
                    if(ptn>1){ptn/=2;}
                    else {ptn*=2;}
                    vc[j] = ptn;
                }
                lp = i;
            }
            else{
                rl=0,lfp=lp+1,rp = i-1;
                n1 = vc[lp];
                n2 = vc[i];
                //cout<<i<<' '<<lp<<"\n";
                while(n1!=n2){
                    rl++;
                    if(n1>n2){
                        n1/=2;
                    }
                    else{
                        n2/=2;
                    }
                }
                //cout<<"a\n";
                if((i-lp)<rl){
                    cout<<-1<<"\n";
                    return;
                }
                else if((i-lp-rl)%2>0){
                    cout<<-1<<"\n";
                    return;
                }
                else{
                n1 = vc[lp];
                n2 = vc[i];
                rl=i-lp;
                mul2=0;
                while(rl>1){
                    rl--;
                    if(n1>n2){
                        n1/=2;
                        vc[lfp]=n1;
                        lfp++;
                    }
                    else if(n1<n2){
                        n2/=2;
                        vc[rp]=n2;
                        rp--;
                    }
                    else{
                        if(lfp>1)vc[lfp]=vc[lfp-2];
                        else{
                            if(vc[lfp-1]==1)vc[lfp]=2;
                            else vc[lfp]=vc[lfp-1]/2;
                        }
                        lfp++;
                    }
                }
                lp = i;
            }
        }
    }}
    if(vc[lp]>1)mul2=0;
    else mul2=1;
    for(int i=lp+1;i<n;i++){
        if(mul2==0)vc[i]=vc[i-1]/2;
        else vc[i] = vc[i-1]*2;
        mul2++;
        mul2%=2;}
    for(int num:vc)cout<<num<<' ';
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}
