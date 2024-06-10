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
    ll n,f,k,fav,mdel;
    cin>>n>>f>>k;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    fav = vc[f-1];
    sort(vc.begin(),vc.end());
    for(int i=0;i<k;i++){
        mdel = vc[n-1-i];
    }   
    if(mdel<fav)cout<<"YES\n";
    else if(mdel==fav){
        if(k==n){
            cout<<"YES\n";
        }
        else if(vc[n-k-1]<fav)cout<<"YES\n";
        else cout<<"MAYBE\n";}
    else cout<<"NO\n";
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
