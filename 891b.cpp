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
    vector<int>pt;
    int cv,n=s.length(),cad=0,pos=-1;
    for(int i=n-1;i>-1;i--){
        cv=(s[i]-'0')+cad;
        if(cv>=5){
            pos=n-i;
            cv=0;
            cad=1;
        }
        else cad=0;
        pt.emplace_back(cv);
    }
    if(pos!=-1)for(int i=0;i<pos;i++)pt[i]=0;
    if(cad>0)pt.emplace_back(cad);
    for(int i=pt.size()-1;i>-1;i--)cout<<pt[i];
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