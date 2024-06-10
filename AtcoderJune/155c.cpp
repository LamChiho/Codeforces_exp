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

int binary_helper(vector<int>&vc,int targn){
    int lw=0,hi=vc.size()-1,mid;
    while(lw<hi){
        mid = (lw+hi)/2;
        if(vc[mid]<targn){
            lw = mid+1;
        }
        else{
            hi = mid;
        }
        if((lw+1)==hi){
            if(vc[lw]>=targn)return lw;
            return hi;
        }
    }
    return lw;
}

void solve() {
    int n,bp;
    cin>>n;
    ll cans=0;
    vector<vector<int>>vc(n,vector<int>(2,0));
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>vc[i][0];
        cin>>vc[i][1];
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    sort(vc.begin(),vc.end());
    for(int i=0;i<n;i++){
        pq.push(vc[i][1]);
        while(true){
            bp = pq.top();
            if(bp<vc[i][0])pq.pop();
            else break;
        }
        bp = pq.size();
        cans+=(bp-1);
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
