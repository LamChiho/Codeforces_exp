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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    ll mxdif=0,lfmx=0,cs=0,cans=0;
    for(int i=0;i<n;i++){
        cs+=vc[i];
        lfmx=max(lfmx,cs);
        if(mxdif<(0LL+lfmx-cs)){
            mxdif=(0LL+lfmx-cs);
            cans=lfmx;
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