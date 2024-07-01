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

int solve() {
    int n;
    cin >> n;

    vector<int> l1(n);
    for (int i = 0; i < n; ++i) {
        cin >> l1[i];
    }

    vector<int> l;
    int cmx = l1[0],dif;
    for (int i = 1; i < n; ++i) {
        if (l1[i] < cmx) {
            dif = cmx - l1[i];
            l.emplace_back(dif);
        }
        cmx = max(cmx, l1[i]);
    }

    sort(l.begin(), l.end());
    int aldminused=0;
    ll cans = 0;
    int cp = 0;
    while (cp < l.size()) {
        cans += (long long)(l.size() - cp + 1) * (l[cp] - aldminused);
        aldminused = l[cp];
        cp++;
        while (cp < l.size() && l[cp] == aldminused) {
            cp++;
        }
    }

    cout << cans <<"\n";

    return 0;
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
