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
    int n;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<ll>rc(n,0);
    vector<ll>lc(n,0);
    for(int i=0;i<n;i++){
        if(vc[i]>0){
            if(i==0)lc[i]=vc[i];
            else lc[i]=(vc[i]+lc[i-1]);
        }
        else if(i>0)lc[i]=lc[i-1];
    }
    for(int i=(n-1);i>-1;i--){
        if(vc[i]<0){
            if(i==(n-1))rc[i]=-vc[i];
            else rc[i]=(rc[i+1]-vc[i]);
        }
        else if(i<(n-1))rc[i]=rc[i+1];
    }
    ll ans=max(rc[0],lc[n-1]);
    for(int i=1;i<n;i++)ans=max(ans,rc[i]+lc[i-1]);
    cout<<ans<<"\n";
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