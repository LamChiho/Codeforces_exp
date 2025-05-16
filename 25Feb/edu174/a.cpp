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
    vector<int>vc(n-2);
    for(int i=0;i<(n-2);i++)cin>>vc[i];
    for(int i=1;i<(n-3);i++)if(vc[i]==0&&vc[i-1]==1&&vc[i+1]==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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