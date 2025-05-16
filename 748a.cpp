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
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b)&&a>c)cout<<"0 ";
    else{
        cout<<(max(b,c)+1-a)<<' ';
    }
    if((b>a)&&b>c)cout<<"0 ";
    else{
        cout<<(max(a,c)+1-b)<<' ';
    }
    if((c>b)&&c>a)cout<<"0 ";
    else{
        cout<<(max(a,b)+1-c)<<' ';
    }
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