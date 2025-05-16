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
#include <string_view>
#include<cmath>
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,cur;
    cin>>n;
    vector<vector<int>>mp(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>mp[i][j];
    }
    vector<int>cnt(n+1,0);
    for(int i=0;i<n;i++){
        cur=0;
        for(int j=(n-1);j>-1;j--){
            if(mp[i][j]==1)cur++;
            else break;
        }
        cnt[cur]++;
    }
    int cbound=1;
    for(int i=1;i<=n;i++){
        while(i>=cbound&&cnt[i]>0){
            cbound++;
            cnt[i]--;
        }
    }
    if(cbound>n)cbound--;
    cout<<cbound<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}