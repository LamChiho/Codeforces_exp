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
    int n;
    cin>>n;
    vector<int>vc(n);
    vector<int>fp(n+1,-1);
    vector<int>lp(n+1,-1);
    for(int i=0;i<n;i++){cin>>vc[i];
    lp[vc[i]]=i;
    if(fp[vc[i]]==-1)fp[vc[i]]=i;}
    int cur=0,cans=0;
    for(int num:lp)if(num>-1){cur++,cans++;}
    for(int i=0;i<n;i++){
        if(fp[vc[i]]==i)cur++;
        if(lp[vc[i]]==i)cur--;
        cans=max(cans,cur);
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}