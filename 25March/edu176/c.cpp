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
    int n,m,x;
    cin>>n>>m;
    vector<ll>rec(n,0);
    for(int i=0;i<m;i++){
        cin>>x;
        x=min(x,n-1);
        rec[x]++;
    }
    vector<ll>vc(n,0);
    vector<ll>v1(n,0);
    for(int i=n-1;i>-1;i--){
        if(i==(n-1)){
            vc[i]=0LL+rec[i]*i;
            v1[i]=rec[i];
        }
        else{
            vc[i]=vc[i+1]+0LL+rec[i]*i;
            v1[i]=rec[i]+v1[i+1];
        }
    }
    ll cans=0;
    for(int i=1;i<n;i++){
        ll minimum = n-i;
        ll totall = vc[minimum];
        ll total_pos=v1[minimum];
        if(i>=minimum){totall-=i,total_pos--;}
        cans+=0LL+rec[i]*(totall-total_pos*minimum+total_pos);
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