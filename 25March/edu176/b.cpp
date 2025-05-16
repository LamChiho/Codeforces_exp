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
    int n,k;
    ll su=0;
    cin>>n>>k;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    if(k==1){
        for(int i=0;i<n;i++){
            if(i!=0){
                su=max(vc[i]+vc[0],su);
            }
            if((i+1)!=n)su=max(vc[i]+vc[n-1],su);
        }
        cout<<su<<"\n";
        return;
    }
    sort(vc.begin(),vc.end());
    for(int i=0;i<=k;i++){
        su+=(0LL+vc[n-1-i]);
    }
    cout<<su<<"\n";
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