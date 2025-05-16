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
    int n,x,np,cv=0;
    cin>>n;
    vector<int>vc(n);
    vector<int>r1(n,0);
    for(int i=0;i<n;i++)cin>>vc[i];
    for(int i=0;i<n;i++){
        cin>>x;
        while(r1[x-1]==0){
            np=vc[x-1];
            r1[x-1]++;
            vc[x-1]=x;
            x=np;
            cv++;
        }
        cout<<cv<<' ';
    }
    cout<<"\n";
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