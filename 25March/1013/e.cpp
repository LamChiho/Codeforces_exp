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
    ll n;
    cin>>n;
    vector<int>rec(n+1,1);
    vector<int>vec(n+1,1);
    rec[0]=0,rec[1]=0;
    vec[0]=0,vec[1]=0;
    for(ll i=2;i<=n;i++){
        if(rec[i]==1)for(ll j=i;j*i<=n;j++){
            rec[i*j]=0;
        }
        vec[i]=rec[i];
    }
    rec[1]++;
    for(int i=2;i<n;i++)vec[i+1]+=vec[i];
    ll cans=0,rate;
    for(ll i=1;i<=n;i++){
        cans+=vec[n/i];
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