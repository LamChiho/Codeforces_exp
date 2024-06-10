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
    ll n1,cr=0,cans=0,ln=-1,cmic=-1,lnn=-1,curmic=-1;
    cin>>n1;
    vector<vector<int>>vc(n1,vector<int>(3,-1));
    for(int i=0;i<n1;i++){
        cin>>v1[i][0];
        cin>>v1[i][1];
        v1[i][2]=i;
    }
    sort(vc.begin(),vc.end());
    vector<int>ret;
    for(int i=n1-1;i>-1;i--){
        if(ln==-1){
            ln = vc[i][0];
            cmic = vc[i][1];
            ret.emplace_back(vc[i][2]);
        }
        else if(ln==vc[i][0]){
            ln = vc[i][0];
            cmic = vc[i][1];
            ret.emplace_back(vc[i][2]);
        }
        else if(vc[i][1]<=cmic){

        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}