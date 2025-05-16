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
    ll n,x,su,cans,pt;
    cin>>n;
    cans=n,pt=n;
    for(ll i=2;i<n;i++){
        x=n/i;
        su=(x+1)*x;
        su/=2;
        su*=i;
        if(cans<su)pt=i;
        cans=max(cans,su);
    }
    cout<<pt<<"\n";
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