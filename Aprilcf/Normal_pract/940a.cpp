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


// True values will be changed to what we want, so all we need to care is if the values are all zero

void solve() {
    ll n,iptn,cur=0;
    cin>>n;
    vector<int>vc(101,0);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[iptn]++;
    }
    for(int num:vc){
        cur+=(num/3);
    }
    cout<<cur<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}