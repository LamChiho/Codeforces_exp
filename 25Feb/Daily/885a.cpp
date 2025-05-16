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
    int n,m,k,cnt=0,p1,p2,x,y;
    cin>>n>>m>>k;
    cin>>p1>>p2;
    for(int i=0;i<k;i++){
        cin>>x>>y;
        if(((x-p1)+(y-p2))%2==0)cnt++;
    }
    if(cnt>0)cout<<"NO\n";
    else cout<<"YES\n";
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