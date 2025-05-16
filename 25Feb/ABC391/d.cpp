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
    int n,w,x,y;
    cin>>n>>w;
    vector<vector<pair<int,int>>>vc(w+1);
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vc[x].push_back(make_pair(y,i+1));
    }
    for(int i=1;i<=w;i++)sort(vc[i].begin(),vc[i].end());
    vector<size_t>nxtp(w+1,0);
    vector<int>rec(n+1,2000000000);
    bool trig=true;
    int ct=-2;
    vector<int>cidx;
    while(trig){
        ct++;
        for(int i=1;i<=w;i++){
            if(nxtp[i]<vc[i].size()){
                ct=max(ct,vc[i][nxtp[i]].first);
                cidx.push_back(vc[i][nxtp[i]].second);
                nxtp[i]++;
            }
            else{
                trig=false;
                break;
            }
        }
        if(trig){
            for(auto idx:cidx)rec[idx]=ct;
            cidx.clear();
        }
    }
    int q,t,idx;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>t>>idx;
        if(rec[idx]>t)cout<<"Yes\n";
        else cout<<"No\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}