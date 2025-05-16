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

void solve() {
    ll n,x,k;
    string s;
    cin>>n>>x>>k>>s;
    ll cur=0;
    for(ll ct=0;ct<min(k,n);ct++){
        if(s[ct]=='L')x--;
        else x++;
        if(x==0){
            cur++,k-=(ct+1);
            break;
        }
    }
    if(k>0&&cur>0){
        int cv=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')cv--;
            else cv++;
            if(cv==0){
                cur+=(k/(i+1));
                break;
            }
        }
        cout<<cur<<"\n";
    }
    else cout<<cur<<"\n";
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