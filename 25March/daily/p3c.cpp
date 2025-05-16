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

ll cur;

void solve() {
    int n,x,v1;
    cin>>n;
    vector<pair<int,int>>vp(2*n);
    for(int i=0;i<n;i++){
        cin>>x;
        vp[i].first=x;
        vp[i].second=0;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        vp[i+n].first=x;
        vp[i+n].second=1;
    }
    sort(vp.begin(),vp.end());
    vector<int>stk;
    vector<int>v3(n);
    ll cans=0;
    int cp=n-1;
    for(int i=0;i<n;i++)cin>>v3[i];
    vector<int>tk2;
    sort(v3.begin(),v3.end());
    for(int i=0;i<(2*n);i++){
        if(vp[i].second==0)stk.emplace_back(vp[i].first);
        else{
            tk2.emplace_back(vp[i].first-stk.back());
            //cans+=(vp[i].first-stk.back()+0LL)*(0LL+v3[cp]);
            //cout<<vp[i].first<<' '<<stk.back()<<' '<<v3[cp]<<"\n";
            //cp--;
            stk.pop_back();
        }
    }
    sort(tk2.begin(),tk2.end());
    for(int i=0;i<n;i++)cans+=(0LL+tk2[i])*(0LL+v3[n-1-i]);
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