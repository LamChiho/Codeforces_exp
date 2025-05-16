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
    string s;
    cin>>n>>s;
    vector<int>rec(26*26,0);
    for(int i=0;i<(n-1);i++){
        rec[(s[i]-'a')*26+(s[i+1]-'a')]++;
    }
    int cans=0;
    for(int i=0;i<(26*26);i++)if(rec[i])cans++;
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