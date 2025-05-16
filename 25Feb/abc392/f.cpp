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
#include<iomanip>
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,x;
    cin>>n;
    vector<pair<int,int>>ps(n);
    for(int i=0;i<n;i++){
        cin>>x;
        ps[i]=make_pair(x-i,i+1);
    }
    sort(ps.begin(),ps.end());
    for(int i=0;i<n;i++)cout<<ps[i].second<<' ';
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}