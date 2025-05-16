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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    ll poss=0;
    vector<int>stk;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){cnt++;
        poss+=i;
        stk.emplace_back(i);
    }
    }
    if(cnt==1){
        cout<<"0\n";
        return;
    }
    int median_index=cnt/2,median=stk[median_index];    
    ll moves = 0;
    for (int i=0;i<cnt;++i) {
        moves+=abs(stk[i]-(median-median_index+i));
    }
    cout<<moves<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}