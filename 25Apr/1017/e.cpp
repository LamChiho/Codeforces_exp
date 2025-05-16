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
    vector<ll>rec(31,0);
    ll cans=0LL,n,cv,curv;
    cin>>n;
    vector<ll>vc(n);
    for(ll i=0;i<n;i++){cin>>vc[i];
    cv=vc[i];
    for(int j=0;j<31;j++){
        rec[j]+=cv%2;
        cv/=2;
    }}
    for(ll i=0;i<n;i++){
        cv=vc[i];
        curv=0;
        for(int j=0;j<31;j++){
            if(cv%2)curv+=(1<<j)*(n-rec[j]);
            else curv+=(1<<j)*(rec[j]);
            cv/=2;
        }
        cans=max(curv,cans);
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