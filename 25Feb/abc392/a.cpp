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
    vector<int>vc(3);
    for(int i=0;i<3;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    if((vc[0]*vc[1])==vc[2]) cout<<"Yes\n";
    else cout<<"No\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}