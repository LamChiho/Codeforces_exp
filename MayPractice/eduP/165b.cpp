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
    string s;
    cin>>s;
    n = (int)s.length();
    int ones=0,cur=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ones++;
        }
        else if(ones>0){
            cur+=(ones+1);
        }
    }
    cout<<cur<<"\n";
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