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
    vector<int>vc(n);
    vector<int>rec(n+1,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    for(int i=(n-1);i>-1;i--){
        if(rec[vc[i]]==0)rec[vc[i]]++;
        else{
            cout<<(i+1)<<"\n";
            return;
        }
    }
    cout<<"0\n";
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