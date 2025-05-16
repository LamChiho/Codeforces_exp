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

ll cur;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string>vs(n);
    string s;
    int cur=0,cans=0;
    for(int i=0;i<n;i++){
        cin>>vs[i];
        cur=0;
        for(int j=0;j<m;j++)cur+=(vs[i][j]-'0');
        cur%=2;
        cans+=cur;
    }
    int v2=0;
    for(int j=0;j<m;j++){
        cur=0;
        for(int i=0;i<n;i++)cur+=(vs[i][j]-'0');
        cur%=2;
        v2+=cur;
    }
    cout<<max(v2,cans)<<"\n";
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