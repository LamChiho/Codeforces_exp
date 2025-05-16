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
    if((n%2)==0)cout<<"-1\n";
    else{
        int i=1;
        while(n>=i){
            cout<<i<<' ';
            i+=2;
        }
        i=2;
        while(n>=i){
            cout<<i<<' ';
            i+=2;
        }
        cout<<"\n";
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