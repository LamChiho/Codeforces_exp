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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vc(n,vector<int>(m));
    vector<int>rec(1+(n*m),0);
    int val;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vc[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            val=1;
            if(i>0){
                if(vc[i][j]==vc[i-1][j])val=2;
            }
            if(j>0){
                if(vc[i][j]==vc[i][j-1])val=2;
            }
            if((i+1)<n){
                if(vc[i][j]==vc[i+1][j])val=2;
            }
            if((j+1)<m){
                if(vc[i][j]==vc[i][j+1])val=2;
            }
            rec[vc[i][j]]=max(rec[vc[i][j]],val);
        }
    }
    int mxv=0,cnt=0,cv=0;
    for(int i=1;i<=(m*n);i++){
        mxv=max(mxv,rec[i]);
        cnt+=rec[i];
    }
    cout<<(cnt-mxv)<<"\n";
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