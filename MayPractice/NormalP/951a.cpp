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

void solve(){
    ll n,mx=1000000000;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    for(int i=1;i<n;i++){
        mx = min(mx,max(vc[i],vc[i-1]));
    }
    mx--;
    cout<<mx<<"\n";
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