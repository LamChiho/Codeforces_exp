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

constexpr ll mo=998244353;


void solve() {
    ll n,cans=0;
    cin>>n;
    priority_queue<ll>pq;
    vector<ll>pt(n,-1);
    set<ll>st;
    for(ll i=1;i<=n;i++){pq.push(i);
    st.insert(0LL+i*i);}
    ll poped,ctarg=1,cs=0,cr=1;
    for(int i=0;i<n;i++){
        poped=-1;
        if(st.find(cs+pq.top())!=st.end()){
            poped=pq.top();
            pq.pop();
        }
        if(pq.size()>0){
        if(st.find(cs+pq.top())!=st.end()){
            cout<<"-1\n";
            return;
        }
        pt[i]=pq.top();
        cs+=pq.top();
        pq.pop();
        if(poped!=-1){
            pq.push(poped);
        }}
        else{
            cout<<"-1\n";
            return;
        }
    }
    for(auto num:pt)cout<<num<<' ';
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