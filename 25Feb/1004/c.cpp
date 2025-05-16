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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    ll n;
    cin>>n;
    ll v=0;
    ll cans=7,cn,ct,cmod=1;
    for(int i=0;i<9;i++){
        cn=n;
        ct=0;
        if(i==0){
            while(cn%10!=7){
                ct++;
                cn+=9;
            }
            cans=min(cans,ct);
        }
        else{
            while(((cn%(cmod*10))/cmod)!=7){
                if((cn%(cmod*10))>=(cmod*8))cans=min(cans,ct+1+(cn%(cmod*10))-(cmod*8));
                ct++;
                cn+=v;
                if((cn%(cmod*10))>=(cmod*8))cans=min(cans,ct+1+(cn%(cmod*10))-(cmod*8));
            }
            cans=min(cans,ct);
        }
        v*=10;
        v+=9;
        cmod*=10;
    }
    cout<<cans<<"\n";
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