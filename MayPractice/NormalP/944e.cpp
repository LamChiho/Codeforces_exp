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

using namespace std;
int binary_helper(int pd,int bd,int ed,int bt,int et){
    long long d1=ed-bd,u2=pd-bd,u1=et-bt,upper = u1,calc=d1,lw=0,hi=et-bt,mid;
    upper*=u2;
    while(lw<hi){
        mid = (lw+hi)/2;
        calc = d1*mid;
        if(calc>upper){
            hi = mid-1;
        }
        else{
            lw = mid;
        }
        if((lw+1)==hi){
            calc = d1*hi;
            if(calc<=upper){lw=hi;}
            else{
                hi=lw;
            }
        }
    }
    return bt+lw;
}
void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> la(k + 1);
    vector<int> lb(k + 1);
    la[0] = 0;
    lb[0] = 0;
    for (int i = 1; i <= k; i++) {
        cin >> la[i];
    }
    for (int i = 1; i <= k; i++) {
        cin >> lb[i];
    }
    vector<pair<int, int>> qs(q);
    for (int i = 0; i < q; i++) {
        cin >> qs[i].first;
        qs[i].second = i;
    }
    sort(qs.begin(), qs.end());
    int p = 0;
    vector<pair<int, int>> ret;
    double t = 0.0;
    int t1 = 0,lw,hi;
    for (auto [pos, i] : qs) {
        while(pos>la[p]){
            p++;
        }
        if(pos==la[p-1]){
            ret.push_back({i,lb[p-1]});
        }
        else if(pos==la[p]){
            ret.push_back({i,lb[p]});
        }
        else{
            t1 = binary_helper(pos,la[p-1],la[p],lb[p-1],lb[p]);
            ret.push_back({i, t1});
        }
    }
    sort(ret.begin(), ret.end());
    string pt;
    for (auto [i, tm] : ret) {
        pt += to_string(tm) + " ";
    }
    cout << pt << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
