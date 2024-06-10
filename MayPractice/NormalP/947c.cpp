
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
typedef long long ll; // 使用 typedef 创建别名
 
ll med_hp(ll n1,ll n2,ll n3){
    ll cp1=max(min(n1,n2),min(n1,n3));
    cp1 = max(cp1,min(n2,n3));
    return cp1;
}
 
void solve(){
    ll n,iptn;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    ll ret=min(vc[0],vc[1]);
    for(int i=2;i<n;i++){
        ret = max(ret,min(vc[i],vc[i-1]));
        ret = max(ret,med_hp(vc[i],vc[i-1],vc[i-2]));
    }
    cout<<ret<<"\n";
}
 
 
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}