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
    string s;
    cin>>s;
    int n=s.length();
    if(n%2)cout<<"NO\n";
    else{
        for(int i=0;i<(n/2);i++){
            if(s[i]!=s[i+n/2]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
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