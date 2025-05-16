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
    priority_queue<int>pq;
    int n,k,cs=0;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        if(i>0){
            cs+=abs(vc[i]-vc[i-1]);
            pq.push(abs(vc[i]-vc[i-1]));
        }
    }
    while(k>1){
        k--;
        cs-=pq.top();
        pq.pop();
    }
    cout<<cs<<"\n";
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