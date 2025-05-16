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
#include<set>
typedef long long ll; 

constexpr ll mo=998244353;

ll cur;

void dis_helper(int curp,int cdis,vector<int>&rec,vector<vector<int>>&map){
    rec[curp]=cdis;
    for(auto nxp:map[curp]){
        if(rec[nxp]==-1)dis_helper(nxp,cdis+1,rec,map);
    }
}

void solve() {
    int n,st,en,a,b;
    cin>>n>>st>>en;
    vector<vector<int>>map(n+1);
    for(int i=1;i<n;i++){
        cin>>a>>b;
        map[a].emplace_back(b);
        map[b].emplace_back(a);
    }
    vector<pair<int,int>>vp;
    vector<int>rec(n+1,-1);
    if(n==1){cout<<"1\n";
    return;}
    else{
        dis_helper(en,0,rec,map);
    }
    for(int i=1;i<=n;i++)vp.emplace_back(make_pair(rec[i],i));
    sort(vp.begin(),vp.end());
    for(int i=(n-1);i>-1;i--)cout<<vp[i].second<<" ";
    cout<<"\n";
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