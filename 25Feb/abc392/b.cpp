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
    int n,m,x;
    cin>>n>>m;
    vector<int>rec(n+1,0);
    for(int i=0;i<m;i++){
        cin>>x;
        rec[x]++;
    }
    cout<<(n-m)<<"\n";
    for(int i=1;i<=n;i++){
        if(rec[i]==0)cout<<i<<' ';
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}