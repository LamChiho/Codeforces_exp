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


void helper1(int n,ll nb){
    vector<int>p1(n);
    vector<int>p2(n);
    int res;
    for(int i=0;i<n;i++){
        res=nb%4;
        nb/=4;
        
    }
}

void solve() {
    int n;
    cin>>n;
    ll lwb=1LL,upperb=1LL;
    upperb<<=n;
    upperb<<=n;
    int q;
    cin>>q;
    string s;
    int x,y;
    ll num;
    ll bnd=1;
    bnd<<=(2*n-2);
    for(int i=0;i<q;i++){
        cin>>s;
        if(s=="<-"){cin>>num;
        }
        else{ cin>>x>>y;
        }
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