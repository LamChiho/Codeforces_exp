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
    int cp=n-1,num;
    vector<char>pt;
    while(cp>-1){
        if(s[cp]=='0'){
            num=(s[cp-2]-'0')*10+(s[cp-1]-'0');
            cp-=3;
        }
        else{
            num=(s[cp]-'0');
            cp--;
        }
        num--;
        pt.emplace_back(('a'+num));
    }
    int psz=pt.size();
    while(psz>0){
        cout<<pt[psz-1];
        psz--;
    }
    cout<<"\n";
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