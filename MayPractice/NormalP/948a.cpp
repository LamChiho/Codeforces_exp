
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
    ll n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"No\n";
        return;
    }
    n-=m;
    if((n%2)!=0){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
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