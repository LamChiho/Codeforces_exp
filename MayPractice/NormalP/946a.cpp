
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
    int x,y,mm;
    cin>>x>>y;
    mm = (y+1)/2;
    x-=(mm*15-4*y);
    x = max(x,0);
    mm+=(x+14)/15;
    cout<<mm<<"\n";
}
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}



   