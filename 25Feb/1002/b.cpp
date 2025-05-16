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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    if(n==k){
        for(int i=1;i<n;i+=2){
            if(vc[i]!=((i+1)/2)){
                cout<<((i+1)/2)<<"\n";
                return;
            }
        }
        cout<<(k/2+1)<<"\n";
        return;
    }
    else{
        for(int i=1;i<=(n-k+1);i++){
            if(vc[i]!=1){
                cout<<"1\n";
                return;
            }
        }
        cout<<"2\n";
        return;
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