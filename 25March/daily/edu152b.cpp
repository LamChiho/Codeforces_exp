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
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        vc[i]%=k;
        if(vc[i]!=0)vc[i]=k-vc[i];
    }
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;i++){
        vp[i].first=vc[i],vp[i].second=i+1;
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n;i++)cout<<vp[i].second<<' ';
    cout<<"\n";
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