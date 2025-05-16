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
    int n;
    cin>>n;
    vector<ll>v1(n);
    vector<ll>v2(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    int same=0,pos=-1;
    for(int i=0;i<n;i++){
        if(v1[i]==v2[i]){same++;pos=i;}
    }
    if(same!=(n%2)){
        cout<<"-1\n";
        return;
    }
    else{
        int exchange=0,excg,idx;
        vector<pair<int,int>>vp;
        if(same){
            if(((pos+1)*2)!=(n+1)){
                exchange++;
                vp.emplace_back(make_pair(pos,n/2));
                excg=v1[pos];
                v1[pos]=v1[n/2];
                v1[n/2]=excg;
                excg=v2[pos];
                v2[pos]=v2[n/2];
                v2[n/2]=excg;
            }
        }
        map<ll,int>pm;
        for(int i=0;i<n;i++){
            pm[v1[i]]=i;
        }
        for(int i=0;i<(n/2);i++){
            if(v1[i]!=v2[n-1-i]){
            exchange++;
            idx=pm[v2[i]];
            vp.emplace_back(make_pair(n-1-i,idx));
            excg=v1[idx];
            v1[idx]=v1[n-1-i];
            v1[n-1-i]=excg;
            excg=v2[idx];
            v2[idx]=v2[n-1-i];
            v2[n-1-i]=excg;
            pm[v1[idx]]=idx;
            pm[v1[n-1-i]]=n-1-i;}
        }
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[n-1-i]){
                cout<<"-1\n";
                return;
            }
        }
        cout<<exchange<<"\n";
        for(auto pr:vp){
            cout<<(1+pr.first)<<' '<<(1+pr.second)<<"\n";
        }
    }
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