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

void solve(){
    long long n,m,k,minimum;
    cin>>n>>m>>k;
    if(m==1){
        cout<<"NO\n";
        return;
    }
    minimum = n-k-1;
    m*=minimum;
    if(n<=m){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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