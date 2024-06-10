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
    ll n,k,iptn,cur=1;
    cin>>n>>k;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        iptn=0;
        while(cur<=k){
            k-=cur;
            iptn+=cur;
            cur*=2;
        }
        vc[i]=iptn;
    }
    vc[n-1]+=k;
    for(ll num:vc){
        cout<<num<<' ';
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
