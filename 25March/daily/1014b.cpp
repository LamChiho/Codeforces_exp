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
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    int n1=0,n2=0;
    for(int i=0;i<n;i++){
        if(i%2){
            // n1
            if(s1[i]=='0')n1++;
            if(s2[i]=='0')n2++;
            n1--;
        }
        else{
            if(s1[i]=='0')n2++;
            if(s2[i]=='0')n1++;
            n2--;
        }
    }
    if(n1<0||n2<0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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