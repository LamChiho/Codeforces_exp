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
#include<iomanip>
typedef long long ll; 

constexpr ll mod=998244353;


int find(int x,vector<int>&f){
    if(f[x]!=x) return f[x]=find(f[x]);
    return x;
}

void join (int x,int y,vector<int>&f){
    int fx=find(x),fy=find(y);
    if(fx>fy) {f[fx]=fy,f[x]=fy;}
    else {f[fy]=fx,f[y]=fx;}
}


void solve() {
    int n,m,x,y,v1,v2;
    cin>>n>>m;
    if(m==(n-1)){
        cout<<"0\n";
        return;
    }
    vector<int>f(n,-1);
    for(int i=0;i<n;i++)f[i]=i;
    int cnt=0;
    vector<int>prs;
    vector<pair<int,int>>vps;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        x--,y--;
        v1=find(x,f),v2=find(y,f);
        if(v1!=v2)join(x,y,f);
        vps.emplace_back(make_pair(x,y));
        prs.emplace_back(i);
    }
    vector<int>seen(n,0);
    deque<int>dq;
    for(int i=0;i<n;i++){
        v1=find(i,f);
        if(seen[v1]==0){
            seen[v1]++;
            cnt++;
            dq.emplace_back(v1+1);
        }
    }
    int cp=0;
    cout<<(cnt-1)<<"\n";
    for(int i=0;i<(cnt-1);i++){
        cout<<(prs[i]+1)<<' ';
        cout<<(vps[prs[i]].first+1)<<' ';
        if(seen[v1]==1)seen[v1]=0;
        while(seen[dq.top()-1]==0)dq.pop_front();
        cout<<dq.top()<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}