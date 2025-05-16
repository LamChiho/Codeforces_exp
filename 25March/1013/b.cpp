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
    ll n,x;
    cin>>n>>x;
    vector<ll>vc(n);
    ll cans=0,cmi=n+1,cle=0,nxp;
    for(ll i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    for(ll i=0;i<n;i++){
        if(i>cmi){cans++;
        cmi=n+1;}
        cle = x/vc[i];
        if(x%vc[i])cle++;
        nxp=i+cle-1;
        cmi = min(cmi,nxp);
        //cout<<cmi<<' '<<nxp<<"a\n";
    }
    if(cmi<n)cans++;
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