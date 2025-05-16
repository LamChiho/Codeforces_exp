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

bool helper(vector<int>&stk,ll targ,int cg){
    int cur=0,cp=0;
    for(int i=0;i<stk.size();i++){
        if(stk[i]>targ){
            if(cp==0){
                cp++,cur++;
            }
        }
        else if(stk[i]<0&&stk[i]<-targ){
            cp=0;
        }
    }
    return cur<=cg;
}


void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll>rec(n);
    ll cdif=0,cv=0;
    vector<int>stk;
    for(int i=0;i<n;i++){
        cin>>rec[i];
        if(s[i]=='B')cv=max(rec[i],cv);
        if(i>0){
            if(s[i]!=s[i-1]){
                if(stk.size()==0){
                    if(s[i]=='R'){
                        stk.emplace_back(cdif);
                    }
                }
                else{
                    if(s[i]=='R')stk.emplace_back(cdif);
                    else stk.emplace_back(-cdif);
                }
                cdif=0;
            }
        }
        cdif=max(rec[i],cdif);
    }
    if(s[n-1]=='B')stk.emplace_back(cdif);
    ll low=0,hi=cv,mid;
    while(low<hi){
        mid=(low+hi)/2;
        if(helper(stk,mid,k))hi=mid;
        else low=mid+1;
        if((low+1)==hi){
            if(helper(stk,low,k)){
                cout<<low<<"\n";
                return;
            }
            else low++;
        }
    }
    cout<<(low)<<"\n";
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