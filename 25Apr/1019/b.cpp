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
    int n,stc=0;
    cin>>n;
    string s;
    cin>>s;
    int cur=0,cans=0;
    for(int i=0;i<n;i++){
        if(cur!=(s[i]-'0')){
            cur=(1-cur);
            cans+=2;
            stc++;
        }
        else cans++;
    }
    if(stc>2)cans-=2;
    else if(stc>1)cans--;
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