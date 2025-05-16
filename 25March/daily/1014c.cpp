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
    cin>>n;
    vector<long long>vc(n);
    long long t1=0,t2=0,mxn=0,su=0;
    for(int i=0;i<n;i++){
        cin>>vc[i];
        if(vc[i]%2)t1++;
        else t2++;
        mxn=max(mxn,vc[i]);
        su+=vc[i];
    }
    if(t1&&t2)cout<<max((su-t1+1),mxn)<<"\n";
    else cout<<mxn<<"\n";
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