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
    int n,s1,s2;
    cin>>n>>s1>>s2;
    vector<vector<int>>rec(n+1,vector<int>(n+1,-1));
    rec[s1][s2]=0;
    int cp=0;
    vector<pair<int,int>>vp;
    priority_queue<pair<int,int>>pq;
    pq.push(make_pair(0,0));
    vp.push_back(make_pair(s1,s2));
    vector<vector<int>>mp1(n+1);
    vector<vector<int>>mp2(n+1);
    int cans=-1;
    int m1,m2,x,y;
    cin>>m1;
    for(int i=0;i<m1;i++){
        cin>>x>>y;
        mp1[x].emplace_back(y);
        mp1[y].emplace_back(x);
    }
    cin>>m2;
    for(int i=0;i<m2;i++){
        cin>>x>>y;
        mp2[x].emplace_back(y);
        mp2[y].emplace_back(x);
    }
    int csz=1;
    while(cp<csz){
        x=vp[pq.top().second].first,y=vp[pq.top().second].second;
        cp++;
        pq.pop();
        for(int p1:mp1[x]){
            for(int p2:mp2[y]){
                if(rec[p1][p2]==-1){
                    rec[p1][p2]=rec[x][y]+abs(p1-p2);
                    vp.emplace_back(make_pair(p1,p2));
                    pq.push(make_pair(-rec[p1][p2],csz));
                    csz++;
                }
                if((p1==p2)&&(x==y)){
                    if(cans==-1)cans=rec[p1][p2];
                    else cans=min(cans,rec[p1][p2]);
                }
            }
        }
    }
    cout<<cans<<"\n";
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