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

ll cur;

bool helper(ll num,ll n1,ll m1,ll targ){
    while(m1>0){
        m1--;
        targ<<=1;
        targ--;
        if(targ>num)return false;
    }
    while(n1>0){
        n1--;
        targ<<=1;
        if(targ>num)return false;
    }
    return targ<=num;
}


bool helper1(ll num,ll n1,ll m1,ll targ){
    while(n1>0){
        n1--;
        targ<<=1;
        if(targ>num)return false;
    }
    while(m1>0){
        m1--;
        targ<<=1;
        targ--;
        if(targ>num)return false;
    }
    return targ<=num;
}


void solve() {
    ll x,n,m;
    cin>>x>>n>>m;
    n = min(n,31LL);
    m = min(m,31LL);
    ll n1=x,m1=m,cpn=x;
    ll hi=n1,lw=0,mid;
    while(lw<hi){
        mid=(hi+lw)/2;
        if(helper1(x,n,m,mid))lw=mid;
        else hi=mid-1;
        if((lw+1)==hi){
            if(helper1(x,n,m,hi))lw++;
            else hi--;
        }
        //cout<<lw<<' '<<hi<<"a\n";
    }
    cout<<lw<<' ';
    hi=n1,lw=0;
    while(lw<hi){
        mid=(hi+lw)/2;
        if(helper(x,n,m,mid))lw=mid;
        else hi=mid-1;
        if((lw+1)==hi){
            if(helper(x,n,m,hi))lw++;
            else hi--;
        }
    }
    cout<<lw<<"\n";
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