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
    int n;
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    int n1=0,n2=0;
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++){
        if(i==0){
            n1++,n2++;
        }
        else{
            if(v1[i]!=v1[i-1])n1++;
            if(v2[i]!=v2[i-1])n2++;
        }
    }
    if(n1>2||n2>2)cout<<"YES\n";
    else if((n1==2)&&(n2==2))cout<<"YES\n";
    else cout<<"NO\n";
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