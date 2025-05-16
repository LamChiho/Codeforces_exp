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
    vector<ll>vc(n);
    ll su=0;
    for(int i=0;i<n;i++)cin>>vc[i];
    priority_queue<ll>pq;
    for(int i=0;i<(n-1);i++)pq.push(vc[i]);
    map<ll,int>mp;
    for(int i=0;i<n;i++){
        su+=vc[n-1-i];
        while(!pq.empty()){
            if(mp[pq.top()]>0){
            mp[pq.top()]--;
            pq.pop();}
            else break;
        }
        if(!pq.empty()){
        if(pq.top()>vc[n-1-i]){
            cout<<(su+(pq.top()-vc[n-1-i]))<<' ';
        }
        else cout<<su<<' ';}
        else cout<<su<<' ';
        if(i!=(n-1))mp[vc[n-i-2]]++;
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