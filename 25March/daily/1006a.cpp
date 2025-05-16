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

ll cur;

void solve() {
    int n,k,p;
    cin>>n>>k>>p;
    if(k<0)k=-k;
    int cs=0;
    for(int i=0;i<n;i++){
        if(cs>=k){
            cout<<i<<"\n";
            return;
        }
        cs+=p;
    }
    if(cs>=k)cout<<n<<"\n";
    else cout<<"-1\n";
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