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

int mod=998244353;
void solve(){
    int a,b,c,d,s1,b1,i1=0,i2=0;
    cin>>a>>b>>c>>d;
    s1 = min(a,b);
    b1 = max(a,b);
    for(int i=s1+1;i<b1;i++){
        if(i==c){
            i1++;
        }
        if(i==d){
            i2++;
        }
    }
    if(i1>0){
        if(i2>0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    else{
        if(i2>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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