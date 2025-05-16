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

ll cur;

void solve() {
    ll n,m,k,hi,mid,lw,cv,md,cnt;
    cin>>n>>m>>k;
    hi=m,lw=1;
    while(hi>lw){
        mid=(hi+lw)/2;
        cv=(m/(mid+1));
        cnt=cv*mid+m%(mid+1);
        cnt*=n;
        if(cnt>=k)hi=mid;
        else lw=mid+1;
        if((lw+1)==hi){
            mid=lw;
            cv=(m/(mid+1));
            cnt=cv*mid+m%(mid+1);
            cnt*=n;
            if(cnt>=k)hi--;
            else lw++;
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