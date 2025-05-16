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
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    int nzdif=-1,zdif=0;
    for(int i=0;i<n;i++){
        if(v1[i]<v2[i]){
            cout<<"No\n";
            return;
        }
        if(v2[i]==0)zdif=max(zdif,v1[i]-v2[i]);
        else{
            if(nzdif==-1)nzdif=v1[i]-v2[i];
            else if(nzdif!=(v1[i]-v2[i])){
                cout<<"No\n";
                return;
            }
        }
    }
    if(nzdif==-1){
        cout<<"Yes\n";
        return;
    }
    if(nzdif>=zdif)cout<<"Yes\n";
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