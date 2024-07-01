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
ll mod = 998244353;

void solve() {
    int n;
    cin >> n;

    vector<int> l1(n);
    for (int i = 0; i < n; ++i) {
        cin >> l1[i];
    }
    int t1=l1[n-1];
    for(int i=n-2;i>-1;i--){
        t1 = max(t1+1,l1[i]);
    }
    cout<<t1<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}
