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

int h2(int n){
    int n1=1;
    while((n1*n1)<=n)n1++;
    n1--;
    return n1;
}

int h3(int n){
    int n1=1;
    while((n1*n1*n1)<=n)n1++;
    n1--;
    return n1;
}

void solve() {
    int n;
    cin>>n;
    int p2,p3,p23;
    p2=h2(n),p3=h3(n);
    p23=h3(p2);
    cout<<(p2+p3-p23)<<"\n";
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