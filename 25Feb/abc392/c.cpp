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
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    vector<int>v3(n+1,-1);
    vector<int>v4(n+1,-1);
    for(int i=0;i<n;i++){
        v3[v2[i]]=v1[i];
    }
    for(int i=0;i<n;i++){
        cout<<v2[v3[i+1]-1]<<' ';
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}