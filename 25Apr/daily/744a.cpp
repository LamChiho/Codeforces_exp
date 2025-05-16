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
    int n1=0,n2=0,n3=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A')n1++;
        else if(s[i]=='B')n2++;
        else n3++;
    }
    if(n2==(n1+n3))cout<<"YES\n";
    else cout<<"NO\n";
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