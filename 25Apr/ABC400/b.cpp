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
    ll n,m,cs=0,cr=1;
    cin>>n>>m;
    for(ll i=0;i<=m;i++){
        cs+=cr;
        cr*=n;
        if(cs>1000000000LL){
            cout<<"inf\n";
            return;
        }
    }
    cout<<cs<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}