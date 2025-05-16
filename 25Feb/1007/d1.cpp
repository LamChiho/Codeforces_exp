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
typedef long long ll; 

constexpr ll mo=998244353;

ll cur;

ll helper(vector<int>&rec,vector<int>&vc,ll targ,ll targl){
    if(targ<=targl){
        cur+=rec[targ-1];
        return rec[targ-1];}
    else{
        cur+=rec[targl-1];
        cur%=2;
        if(targ%2) return rec[targl-1];
        else return helper(rec,vc,targ/2,targl);
    }
}

void solve() {
    ll n,l,r;
    cin>>n>>l>>r;
    cur=0;
    ll targl=2*n+1LL,cs=0;
    vector<int>vc(targl);
    vector<int>rec(targl);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        cs+=vc[i];
        cs%=2;
        rec[i]=cs;
    }
    for(int i=n;i<targl;i++){
        vc[i]=rec[(i+1)/2-1];
        rec[i]=(vc[i]+rec[i-1])%2;
    }
    ll cans=0;
    helper(rec,vc,l*2,targl);
    cur%=2;
    cans=cur;
    cur=0;
    helper(rec,vc,r*2,targl);
    cur%=2;
    cans-=cur;
    cans%=2;
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