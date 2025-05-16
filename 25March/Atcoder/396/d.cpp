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

constexpr ll mod=998244353,infi = 9223372036854775807LL;;
int targ;


ll helper(vector<vector<pair<int,ll>>>&vp,int curp, int cnt,int cv,ll aldv,int n){
    if(cnt==1){
        for(auto pr:vp[curp]){
            if(pr.first==0){
                return aldv^pr.second;
            }
        }
        return infi;
    }
    else{
        ll retv=infi,nv;
        for(int i=1;i<(n-1);i++){
            if(cv&(1<<i)){
                for(auto pr:vp[curp]){
                    if(pr.first==i)retv=min(retv,helper(vp,i,cnt-1,cv^(1<<i),aldv^pr.second,n));
                }
            }
        }
        return retv;
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,ll>>>vp(n+1);
    int x,y,ct,cv;
    ll v,cans=infi;
    targ=1<<(n-1);
    for(int i=0;i<m;i++){
        cin>>x>>y>>v;
        x--,y--;
        vp[x].emplace_back(make_pair(y,v));
        vp[y].emplace_back(make_pair(x,v));
    }
    for(int i=1;i<1<<n;i++){
        if((i&1)&&(i&targ)){
            cv=i,ct=0;
            while(cv>0){
                ct+=cv%2;
                cv/=2;
            }
            cv=i^targ;
            cans=min(cans,helper(vp,n-1,ct-1,cv,0,n));
        }
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}