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
    int n,iptn;
    cin>>n;
    vector<int>vc(n+1);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i+1]=iptn;
    }
    for(int i=1;i<=n;i++){
        if(vc[vc[i]]==(i)){
            cout<<2<<"\n";
            return;
        }
    }
    cout<<3<<"\n";
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