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
    ll a,b,c,k,cans=0,v;
    cin>>a>>b>>c>>k;
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            if((k%(i*j))==0){
                if((k/(i*j))<=c){
                    cans=max(cans,(a-i+1)*(b-j+1)*(c-(k/(i*j))+1));
                }
            }
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