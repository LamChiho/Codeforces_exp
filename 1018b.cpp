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
    int n,k;
    cin>>n>>k;
    ll cans=0;
    vector<vector<int>>vc(n,vector<int>(3));
    for(int i=0;i<n;i++)cin>>vc[i][1];
    for(int i=0;i<n;i++){cin>>vc[i][2];}
    vector<int>mivs;
    for(int i=0;i<n;i++){cans+=(ll)max(vc[i][1],vc[i][2]);mivs.emplace_back(min(vc[i][1],vc[i][2]));}
    sort(mivs.begin(),mivs.end());
    for(int i=1;i<k;i++){
        cans+=(ll)mivs[n-i];
    }
    cans++;
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