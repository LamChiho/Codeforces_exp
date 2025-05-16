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
    int n,ors=0,cs;
    cin>>n;
    string s;
    cin>>s;
    vector<int>vc(n);
    for(int i=0;i<n;i++){vc[i]=(s[i]-'0');
        ors+=vc[i];
    }
    int cans=1,cr=0;
    vector<int>revrec(n,0);
    for(int i=2;i<=n;i++){
        cs=0;
        for(int j=0;(j+i)<=n;j++){
            if((vc[j]^(cr%2))==0){
                cr++;
                revrec[j+i-1]=-1;
            }
            vc[j]^=(cr%2);
            cr+=revrec[j];
            cs+=vc[j];
        }
        for(int j=(n-i+1);j<n;j++){
            vc[j]^=(cr%2);
            cr+=revrec[j];
            cs+=vc[j];
        }
        if(cs==n)cans=i;
        for(int j=0;j<n;j++){vc[j]=(s[j]-'0');
        revrec[j]=0;}
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