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


void solve() {
    int n,m,x,v;
    cin>>n>>m;
    vector<vector<int>>vc(m);
    for(int i=0;i<m;i++){
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>v;
            vc[i].emplace_back(v);
        }
    }
    vector<int>rec(n+1);
    for(int i=0;i<n;i++){
        cin>>v;
        rec[v]=i;
    }
    vector<int>calc(n,0);
    for(int i=0;i<m;i++){
        x=0;
        for(int j=0;j<vc[i].size();j++){
            x=max(x,rec[vc[i][j]]);
        }
        calc[x]++;
    }
    for(int i=0;i<n;i++){
        cout<<calc[i]<<"\n";
        if((i+1)<n)calc[i+1]+=calc[i];
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}