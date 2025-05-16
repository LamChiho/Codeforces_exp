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

constexpr ll mod=998244353;

ll cur;

void solve() {
    int n,cans=0;
    cin>>n;
    vector<int>vc(2*n+1);
    vc[0]=-1;
    vector<pair<int,int>>vp(n+1,pair<int,int>(-1,-1));
    for(int i=0;i<(2*n);i++){cin>>vc[i+1];
    if(vp[vc[i+1]].first==-1)vp[vc[i+1]].first=i+1;
    else vp[vc[i+1]].second=i+1;}
    for(int i=1;i<n;i++){
        int p1=vp[i].first,p2=vp[i].second;
        if((p2-p1)>3){
            if(vc[p1-1]==vc[p2-1])if(vc[p1-1]>i)cans++;
            if(vc[p1+1]==vc[p2-1])if(vc[p1+1]>i)cans++;
            if(vc[p1-1]==vc[p2+1])if(vc[p1-1]>i)cans++;
            if(vc[p1+1]==vc[p2+1])if(vc[p1+1]>i)cans++;
        }
        else if((p2-p1)>1){
            if(vc[p1-1]==vc[p2-1])if(vc[p1-1]>i)cans++;
            if(vc[p1-1]==vc[p2+1])if(vc[p1-1]>i)cans++;
            if(vc[p1+1]==vc[p2+1])if(vc[p1+1]>i)cans++;
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