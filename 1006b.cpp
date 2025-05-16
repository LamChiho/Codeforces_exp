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
    vector<int>vc(n);
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        v1[i]=vc[i];
    }
    sort(vc.begin(),vc.end());
    for(int i=0;i<n;i++){
        if((vc[i]%2!=v1[i]%2)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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