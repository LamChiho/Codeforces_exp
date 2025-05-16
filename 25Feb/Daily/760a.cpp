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
    vector<int>vc(7);
    for(int i=0;i<7;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    cout<<vc[0]<<' '<<vc[1]<<' '<<(vc[6]-vc[0]-vc[1])<<"\n";
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