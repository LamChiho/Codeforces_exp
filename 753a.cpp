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
    string s1,s2;
    cin>>s1>>s2;
    vector<int>rec(26,-1);
    for(int i=0;i<26;i++)rec[(s1[i]-'a')]=i;
    int lp=-1,cans=0;
    for(int i=0;i<s2.length();i++){
        if(i==0)lp=(rec[s2[i]-'a']);
        else{
            if(rec[s2[i]-'a']>lp)cans+=rec[s2[i]-'a']-lp;
            else cans+=lp-rec[s2[i]-'a'];
            lp=rec[s2[i]-'a'];
        }
    }
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