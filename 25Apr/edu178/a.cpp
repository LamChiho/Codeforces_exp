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
    int a,b,c,su;
    cin>>a>>b>>c;
    su=(a+b+c);
    if(su%3){
        cout<<"NO\n";
        return;
    }
    else if(a>(su/3)||b>(su/3)){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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