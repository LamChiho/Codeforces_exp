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
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int n1=0,n2=0;
    ll cans=0;
    while(n>0&&v1[n-1]>=0){
        cans+=v1.back();
        v1.pop_back();
        n1++;
        n--;
    }
    while(m>0&&v2[m-1]>=0&&n2<n1){
        cans+=v2.back();
        v2.pop_back();
        n2++;
        m--;
    }
    while(n>0&&m>0){
        if((v1[n-1]+v2[m-1])>=0){
            cans+=(v1[n-1]+v2[m-1]+0LL);
            v1.pop_back();
            v2.pop_back();
            n--;
            m--;
        }
        else break;
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}