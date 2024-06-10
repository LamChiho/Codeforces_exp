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
    ll n,m,cans=0;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int>vc(7,-m);
    for(int i=0;i<n;i++)vc[s[i]-'A']++;
    for(int j=0;j<7;j++){
        if(vc[j]<0)cans-=vc[j];
    }
    
    cout<<cans<<"\n";
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
