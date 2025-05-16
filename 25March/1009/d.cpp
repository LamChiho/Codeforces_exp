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
    int n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>vp(n);
    for(int i=0;i<n;i++)cin>>vp[i].first;
    for(int i=0;i<n;i++)cin>>vp[i].second;
    map<ll,ll>mp;
    ll v1,r1,y,val,lv,hv,midv;
    for(int i=0;i<n;i++){
        v1=vp[i].first,r1=vp[i].second;
        for(ll j=v1-r1;j<=v1+r1;j++){
            lv=0,hv=r1;
            midv=(lv+hv)/2;
            while(lv<hv){
            midv=(lv+hv)/2;
            if((midv*midv+(v1-j)*(v1-j))<=(r1*r1)){
                lv=midv;
            }
            else hv=midv-1;
            if((lv+1)==hv){
                if((hv*hv+(v1-j)*(v1-j))<=(r1*r1)){
                    lv=hv;
                }
                else hv=lv;
            }
            }
            mp[j]=max(mp[j],2*hv+1);
        }
    }
    ll cans=0;
    for(auto pr:mp){
        cans+=pr.second;
        //cout<<pr.first<<' '<<pr.second<<"\n";
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