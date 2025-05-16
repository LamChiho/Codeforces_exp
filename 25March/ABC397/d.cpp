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
    ll n;
    cin>>n;
    ll d,lw,hi,mid,v,val;
    d=1LL;
    while((d*d*d)<n){
        if(n%d==0){
            v=n/d;
            //cout<<d<<' '<<v<<"a\n";
            lw=1,hi=min((v-d*d)/(3*d),(ll)sqrt(v/3));
            while(lw<hi){
                mid=(lw+hi)/2;
                val=(3*mid*mid+3*d*mid+d*d);
                if(val>v)hi=mid-1;
                else if(val==v){
                    cout<<(d+mid)<<' '<<mid<<"\n";
                    return;
                }
                else{
                    lw=mid+1;
                }
            }
            val=(3*lw*lw+3*d*lw+d*d);
            if(val==v){
                cout<<(d+lw)<<' '<<lw<<"\n";
                return;
            }
        }
        d++;
    }
    cout<<"-1\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}