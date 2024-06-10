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
        int n;
        cin >> n;
        vector<int> l(n);
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }
        unordered_map<int, vector<pair<int, int>>> d;
        unordered_map<int,int>d1;
        vector<int> pos;
        for (int i = 0; i < n; i++) {
            int num = l[i];
            int cur = 4;
            int same = 0;
            while (cur <= num) {
                same += (cur & num);
                cur *= 2;
            }
            if (d.find(same) == d.end()) {
                d[same] = {{num, i}};
                pos.push_back(same);
                d1[same] = 0;
            } else {
                d[same].push_back({num, i});
                pos.push_back(same);
            }
        }
        for (auto& entry : d) {
            sort(entry.second.begin(), entry.second.end());
        }
        string s;
        for (int i = 0; i < n; i++) {
            s += to_string(d[pos[i]][d1[pos[i]]].first) + " ";
            d1[pos[i]]++;
        }
        cout << s << endl;
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