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


int gcd_helper(int n1,int n2){
    int n3;
    while((n1%n2)>0){
        n3 = n1%n2;
        n1 = n2;
        n2 = n3;
    }
    return n2;
}


void solve(){
    int x;
    cin>>x;
    int y=1,cv=2,cdv;
    for(int i=2;i<x;i++){
        cdv = gcd_helper(x,i);
        if((cdv+i)>cv){
            cv = cdv+i;
            y = i;
        }
    }
    cout<<y<<"\n";
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