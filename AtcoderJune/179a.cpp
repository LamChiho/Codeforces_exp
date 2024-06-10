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
    ll n,k,su=0,pt=0,p1=1;
    cin>>n>>k;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    vector<ll>vs(n+1,0);
    for(int i=1;i<=n;i++)vs[i]=vs[i-1]+vc[i-1];
    bool trig=false;
    for(int i=0;i<=n;i++){
        if(vs[i]<k){
            if(trig){
                pt=1;
            }
        }
        else{
            trig=true;
        }
    }
    if(k<=0){
        if(vs[n]>=k){
            su = 0;
            for(int i=n-1;i>-1;i--){
                su+=vc[i];
                if(su<k)p1=0;
            }
        }
        else{
            cout<<"No\n";
            return;
        }
        if(p1==1){
            cout<<"Yes\n";
            for(int i=n-1;i>-1;i--)cout<<vc[i]<<' ';
            cout<<"\n";
            return;
        }
    }
    else if(pt==0){
        cout<<"Yes\n";
        for(int i=0;i<n;i++)cout<<vc[i]<<' ';
        cout<<"\n";
        return;
    }
    cout<<"No\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
