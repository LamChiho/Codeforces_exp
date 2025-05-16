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

ll helper(ll n1,ll n2){
    ll n3=n2;
    if(n1<n2){
        n3=n2;
        n2=n1;
        n1=n3;
    }
    while(n1%n2){
        n3=n1%n2;
        n1=n2;
        n2=n3;
    }
    return n2;
}

void solve() {
    ll n;
    cin>>n;
    vector<ll>vc(n);
    for(ll i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    if(vc[1]==vc[0]){
        cout<<"Yes\n";
        return;
    }
    vector<ll>mi(n);
    vector<ll>gc(n);
    ll cur=-1;
    mi[0]=vc[0];
    gc[n-1]=vc[n-1];
    for(ll i=1;i<n;i++)mi[i]=min(mi[i-1],vc[i]);
    for(ll i=(n-2);i>-1;i--)gc[i]=helper(vc[i],gc[i+1]);
    for(ll i=1;i<n;i++){
        if(gc[i]==mi[i-1]){
            cout<<"Yes\n";
            return;
        }
        if((vc[i]%vc[0])==0){
            if(cur==-1)cur=vc[i];
            else cur=helper(cur,vc[i]);
        }
    }
    if(cur==vc[0])cout<<"Yes\n";
    else cout<<"No\n";
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