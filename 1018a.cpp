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
    cin>>n;
    string s;
    cin>>s;
    vector<int>vc(n);
    int lf=1,rt=n;
    for(int i=n-2;i>-1;i--){
        if(s[i]=='<'){vc[i+1]=lf;lf++;}
        else{vc[i+1]=rt;rt--;}
    }
    vc[0]=lf;
    for(int num:vc)cout<<num<<' ';
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