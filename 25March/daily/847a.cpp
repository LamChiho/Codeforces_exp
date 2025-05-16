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

ll cur;
string cpi="314159265358979323846264338327";
void solve() {
    int cr=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==cpi[i])cr++;
        else break;
    }
    cout<<cr<<"\n";
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