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
    vector<int>vc(n);
    vector<int>vb(m);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    for(int i=0;i<m;i++){
        cin>>vb[i];
    }
    vector<int>vd(n);
    for(int i=0;i<n;i++){
        vd[i]=vb[0]-vc[i];
    }
    int v1,v2;
    for(int i=(n-2);i>-1;i--){
        v1=vc[i],v2=vb[0]-vc[i];
        if(v1<=vc[i+1]||v1<=vd[i+1]){
            vc[i]=v1;
        }
        else{
            vc[i]=-2000000001;
        }
        if(v2<=vc[i+1]||v2<=vd[i+1]){
            vd[i]=v2;
        }
        else{
            vd[i]=-2000000001;
        }
    }
    if(vc[0]!=-2000000001||vd[0]!=-2000000001)cout<<"YES\n";
    else cout<<"NO\n";
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