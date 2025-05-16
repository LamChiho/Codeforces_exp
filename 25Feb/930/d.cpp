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
    string s;
    cin>>s;
    deque<ll>lr;
    deque<ll>rl;
    ll ls=0,rs=0;
    int rc=0,lc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            rl.emplace_back(i);
        }
    }
    ll ptv;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            if(rc>0){
                rc--;
                rs-=i;
            }
            rl.pop_front();
        }
        else{
            lr.emplace_back(i);
        }
    }
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