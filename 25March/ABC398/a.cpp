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
    for(int i=1;i<=n;i++){
        if(i*2<n)cout<<'-';
        else if((i-1)*2<=n)cout<<'=';
        else cout<<'-';
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}