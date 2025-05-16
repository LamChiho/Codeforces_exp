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
    int n,m,x,y,v,cnt=0;
    map<int,int>mp;
    cin>>n>>m;
    ll cans=0;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v=x+y;
        if((n%2)==0&&min(x,y)==1&&max(x,y)==(1+n/2)){
            cans+=(ll)(i-cnt);
            cnt++;
        }
        else{
            cans+=(ll)(i-mp[v]);
            mp[v]++;
        }
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}