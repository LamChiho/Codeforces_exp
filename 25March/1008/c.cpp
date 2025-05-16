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

ll cur;

void solve() {
    int n;
    cin>>n;
    vector<int>vc(2*n);
    for(int i=0;i<(2*n);i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    cout<<vc[n-1]<<' ';
    ll su=0LL+vc[n-1];
    for(int i=0;i<n;i++){
        if((i+1)<n){
            cout<<vc[i]<<' '<<vc[n+i]<<' ';
            su+=vc[n+i];
            su-=vc[i];
        }
        else{
            su+=vc[n+i];
            cout<<su<<' ';
            cout<<vc[n+i]<<"\n";
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