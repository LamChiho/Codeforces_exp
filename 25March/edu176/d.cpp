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
map<ll,long long>mp;
vector<ll>rec(3601);
void helper(){
    for(ll i=1;i<60;i++){
        vector<pair<ll,ll>>vp;
        for(auto it=mp.begin();it!=mp.end();it++){
            ll val=it->first;ll v1=it->second;
            ll t1=val+i,t2=val+60*i;
            ll cst = (1LL)<<i;
            if(t1<3601)vp.emplace_back(make_pair(t1,0LL+v1+cst));
            if(t2<3601&&(val%60+i)<60)vp.emplace_back(make_pair(t2,0LL+v1+cst));
        }
        for(auto pr:vp){
            if(mp.find(pr.first)==mp.end())mp[pr.first]=pr.second;
        }
    }
}


void solve() {
    ll n1,n2;
    cin>>n1>>n2;
    if(n1==n2){
        cout<<"0\n";
    }
    else{
        ll cans=576460752303423488;
        for(ll val=0;val<3601;val++){
            ll v1=rec[val];
            ll t1=val/60,t2=val%60;
            if((0LL+n1>>t1)==(0LL+n2>>t2)){
                cans=min(cans,v1);
            }
        }
        cout<<cans<<"\n";
    }
}


int main() {
    mp[0]=0;
    helper();
    for(auto it=mp.begin();it!=mp.end();it++){
        ll val=it->first;ll v1=it->second;
        if(val<3601)rec[val]=v1;
    }
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