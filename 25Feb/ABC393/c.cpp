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

void solve() {
    ll n,m,cur=0,v1,v2,v,f1,f2;
    cin>>n>>m;
    set<ll>st;
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        if(v1==v2)cur++;
        else{
            f1=v1*n+v2,f2=v2*n+v1;
            if(st.find(f1)!=st.end()||st.find(f2)!=st.end()){
                cur++;
            }
            st.insert(f1);
            st.insert(f2);
        }
    }
    cout<<cur<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}