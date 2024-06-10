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

void solve() {
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++){
        if(i>=l){
            if(i<=r){
                cout<<(r-(i-l))<<' ';
            }
            else{
                cout<<i<<' ';
            }
        }
        else{
            cout<<i<<' ';
        }
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
