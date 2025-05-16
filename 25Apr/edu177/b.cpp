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
    ll n,k,x,su=0,tsu;
    cin>>n>>k>>x;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        su+=vc[i];
    }
    tsu=su*k;
    if(tsu<x){
        cout<<"0\n";
        return;
    }
    ll cans=1;
    cans+=((tsu-x)/su)*n;
    ll res=((tsu-x)/su)*su;
    for(int i=0;i<n;i++){
        if((res+vc[i])<=(tsu-x))cans++;
        else break;
        res+=vc[i];
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