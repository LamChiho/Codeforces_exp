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


void solve() {
    ll n,k;
    cin>>n>>k;
    int n2=0,n5=0;
    ll cpn=n;
    while(n%2==0){
        n2++;
        n/=2;
    }
    while(n%5==0){
        n5++;
        n/=5;
    }
    if(n2==n5){
        if(k>=10){
            while(k>=10){
                cpn*=10;
                k/=10;
            }
        }
        cout<<(cpn*k)<<"\n";
    }
    else if(n2>n5){
        while((n2>n5)&&(k>=5)){
            k/=5;
            cpn*=5;
            n2--;
        }
        if(k>=10){
            while(k>=10){
                cpn*=10;
                k/=10;
            }
        }
        cout<<(cpn*k)<<"\n";
    }
    else{
        while((n5>n2)&&(k>=2)){
            k/=2;
            cpn*=2;
            n5--;
        }
        if(k>=10){
            while(k>=10){
                cpn*=10;
                k/=10;
            }
        }
        cout<<(cpn*k)<<"\n";
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