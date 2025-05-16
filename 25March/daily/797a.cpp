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
    int md=n%3;
    if(md==0){
        cout<<(n/3)<<' '<<(1+n/3)<<' '<<(-1+n/3)<<"\n";
    }
    else if(md==1){
        cout<<(n/3)<<' '<<(2+n/3)<<' '<<(-1+n/3)<<"\n";
    }
    else
    {
        cout<<(1+n/3)<<' '<<(2+n/3)<<' '<<(-1+n/3)<<' '<<"\n";
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