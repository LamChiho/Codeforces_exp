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
    vector<int>pt(2*n+1);
    vector<int>vc(n);
    vector<int>seen(2*n+1,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){cin>>vc[j];
        pt[i+j+2]=vc[j];
        seen[vc[j]]=1;}
    }
    for(int i=1;i<=2*n;i++)if(seen[i]==-1)pt[1]=i;
    for(int i=1;i<=2*n;i++)cout<<pt[i]<<' ';
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