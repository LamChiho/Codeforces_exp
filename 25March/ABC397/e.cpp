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
#include<map>
typedef long long ll; 

constexpr ll mod=998244353;

int cur;


void helper(vector<vector<int>>&mp,vector<int>&rec,int cpos,int from,int k){
    int cv=0;
    rec[cpos]=0;
    for(auto num:mp[cpos]){
        if(num!=from&&rec[num]==-1){helper(mp,rec,num,cpos,k);
        cv+=rec[num];}
    }
    if(cv==k)cur++,cv=0;
    rec[cpos]=cv;
}

void solve() {
    int n,k,u,v;
    cur=0;
    cin>>n>>k;
    vector<int>rec(n*k+1,-1);
    vector<vector<int>>mp(n*k+1);
    for(int i=1;i<(n*k);i++){
        cin>>u>>v;
        mp[u].emplace_back(v);
        mp[v].emplace_back(u);
    }
    for(int i=1;i<=(n*k);i++){
        if(rec[i]==-1){
            helper(mp,rec,i,-1,k);
        }
    }
    if(cur==n)cout<<"Yes\n";
    else cout<<"No\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}