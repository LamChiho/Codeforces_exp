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
    ll n,m,q,tp,x,y,v;
    cin>>n>>m>>q;
    vector<int>rec(n+1,0);
    set<ll>st;
    for(int i=0;i<q;i++){
        cin>>tp>>x;
        if(tp!=2){
            cin>>y;
            if(tp==1){
                v=x*(m+1)+y;
                st.insert(v);
            }
            else{
                if(rec[x]>0){
                    cout<<"Yes\n";
                }
                else{
                    v=x*(m+1)+y;
                    if(st.find(v)!=st.end())cout<<"Yes\n";
                    else cout<<"No\n";
                }
            }
        }
        else{
            rec[x]++;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}