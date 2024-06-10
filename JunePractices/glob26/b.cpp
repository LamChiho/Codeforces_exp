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
    string s;
    cin>>s;
    int n=s.length();
    if(s[n-1]=='9'){
        cout<<"NO\n";
        return;
    }
    else if(s[0]!='1'){
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<(n-1);i++){
        if(s[i]=='0'){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}
