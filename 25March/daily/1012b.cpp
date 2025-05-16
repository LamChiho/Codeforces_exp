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
    int n,m;
    cin>>n>>m;
    vector<string>vs(n);
    for(int i=0;i<n;i++)cin>>vs[i];
    vector<vector<int>>rec(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vs[i][j]=='1')rec[i][j]++;
            else break;
        } 
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(vs[i][j]=='1')rec[i][j]++;
            else break;
        } 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)if(vs[i][j]=='1'&&rec[i][j]==0){
            //cout<<i<<' '<<j;
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
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