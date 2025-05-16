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
    ll su=0,cans=0;
    for(int i=0;i<n;i++)su+=vc[i];
    cans=su;
    for(int i=1;i<n;i++){
        su=0;
        for(int j=(n-1);j>=i;j--){
            vc[j]=vc[j]-vc[j-1];
            su+=vc[j];
        }
        cans=max(cans,su);
        cans=max(cans,-su);
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