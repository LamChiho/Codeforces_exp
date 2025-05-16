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
    vector<int>vc(2*n);
    int le=2*n,dift=0,cdif,targ,targp,cans=2*n;
    for(int i=0;i<(2*n);i++){cin>>vc[i];
    if(vc[i]==1)dift++;
    else dift--;
    }
    vector<int>rec(4*n+1,-1);
    rec[n*2]=0,cdif=0;
    for(int i=n;i<le;i++){
        if(vc[i]==1)cdif++;
        else cdif--;
        if(rec[cdif+2*n]==-1)rec[cdif+2*n]=(i-n+1);
    }
    cdif=0;
    for(int i=(n-1);i>-1;i--){
        targ=dift-cdif;
        targp=2*n+targ;
        if(rec[targp]>-1)cans=min(cans,(n-i-1+rec[targp]));
        if(vc[i]==1)cdif++;
        else cdif--;
    }
    targ=dift-cdif;
    targp=2*n+targ;
    if(rec[targp]>-1)cans=min(cans,(n+rec[targp]));
    cout<<cans<<"\n";
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