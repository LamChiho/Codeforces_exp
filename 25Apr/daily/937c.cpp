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
    int n1=10*(s[0]-'0')+(s[1]-'0');
    if(n1==0){
        cout<<12<<s[2]<<s[3]<<s[4]<<" AM\n";
    }
    else if(n1>=13){
        if((n1-12)<10)cout<<0<<(n1-12)<<s[2]<<s[3]<<s[4]<<" PM\n";
        else cout<<(n1-12)<<s[2]<<s[3]<<s[4]<<" PM\n";
    }
    else if(n1==12){
        cout<<s<<" PM\n";
    }
    else{
        cout<<s<<" AM\n";
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