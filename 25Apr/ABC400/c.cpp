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

ll helper(ll nb){
    ll lw=1,hi=1000000000LL,mid;
    while(lw<hi){
        mid=(lw+hi)/2;
        if((mid*mid)<=nb)lw=mid;
        else hi=mid-1;
        if((lw+1)==hi){
            if((hi*hi)<=nb)return hi;
            else return lw;
        }
    }
    return lw;
}

void solve() {
    ll n;
    cin>>n;
    ll lf=2LL,rbd,cv,cans=0;
    while(lf<=n){
        rbd=n/lf;
        cv=helper(rbd);
        cans+=cv%2;
        cv/=2;
        cans+=cv;
        lf<<=1;
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}