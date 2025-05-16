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
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[vc[i]]++;
    }
    int cans=-1,cv=-1;
    for(int i=0;i<n;i++)if(mp[vc[i]]==1)if(cans<vc[i]){cans=vc[i],cv=(i+1);}
    cout<<cv<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}