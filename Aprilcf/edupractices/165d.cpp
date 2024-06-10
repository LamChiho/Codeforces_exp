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

typedef long long ll; // 使用 typedef 创建别名
void solve(){
    ll n, k, cp = 0, ret = 0, sz=0;
    cin >> n >> k;
    vector<ll> l1(n);
    vector<ll> l2(n);
    priority_queue<ll> pq;
    // 读取 l1 和 l2
    for (int i = 0; i < n; i++) {
        cin >> l1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> l2[i];
    }

    vector<pair<ll, ll>> l;

    // 处理输入
    for (int i = 0; i < n; i++) {
        if (l2[i] > l1[i]) {
            sz++;
            l.push_back(make_pair(-l2[i], l2[i]-l1[i]));
            cp += (l2[i] - l1[i]);
        }
    }

    // 对 l 进行排序
    sort(l.begin(), l.end());
    if(sz<=k){
        cout<<0<<"\n";
        return;
    }
    // 更新 cp
    for (int i = 0; i < k; ++i) {
        cp += l[i].first;
        pq.push(-l[i].first-l[i].second);
    }
    ret = max(cp, ret);
    for (int i = k; i <sz; i++) {
        pq.push(-l[i].first-l[i].second);
        cp += l[i].first;
        cp+=pq.top();
        ret = max(ret, cp);
        pq.pop();
    }    
    cout << ret << "\n";
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