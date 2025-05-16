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
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        if((i+2)==n)vc[i]=n;
        else if((i+1)==n)vc[i]=n-1;
        else{
            if(k%2)vc[i]=n;
            else vc[i]=n-1;
        }
    }
    for(auto num:vc)cout<<num<<' ';
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