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
    ll n1,cr=0,cans=0;
    cin>>n1;
    string s;
    vector<string>vs(n1);
    for(int i=0;i<n1;i++){
        cin>>s;
        cin>>cr;
        cans+=cr;
        cans%=n1;
        vs[i]=s;
    }
    sort(vs.begin(),vs.end());
    cout<<vs[cans]<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
