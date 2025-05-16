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
    vector<pair<int,string>>vp;
    string s;
    int le;
    for(int i=0;i<n;i++){
        cin>>s;
        le=s.length();
        vp.emplace_back(make_pair(le,s));
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n;i++)cout<<vp[i].second;
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}