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
    int n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<"1\n";
        return;
    }
    else{
        int minus=k,cr=0;
        if(n%2!=minus%2){
            minus--;
        }
        cr++;
        n-=minus;
        k/=2;
        k*=2;
        cr+=(n/k);
        if(n%k)cr++;
        cout<<cr<<"\n";
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