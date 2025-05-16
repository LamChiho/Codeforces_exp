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

vector<int>par(200001,0);
int find(int x){
    if(par[x]!=x)par[x]=find(par[x]);
    return par[x];
}

bool unite(int x,int y){
    int rx=find(x);
    int ry=find(y);
    if(rx==ry)return true;
    else if(rx<ry)par[ry]=rx;
    else par[rx]=ry;
    return false;
}

void solve() {
    int n,m,remove=0,a,b;
    cin>>n>>m;
    for(int i=0;i<=n;i++)par[i]=i;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(unite(a,b))remove++;
    }
    cout<<remove<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}