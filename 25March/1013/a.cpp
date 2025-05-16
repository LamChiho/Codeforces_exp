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
    int n;
    cin>>n;
    vector<int>rec(10,0);
    rec[0]=3,rec[1]++,rec[2]=2,rec[3]=1,rec[5]++;
    vector<int>vc(n);
    int cur=5,cans=0;
    for(int i=0;i<n;i++){cin>>vc[i];
    if(rec[vc[i]]>0){
        rec[vc[i]]--;
        if(rec[vc[i]]==0)cur--;
        if(cur==0){
            cans=(i+1);
        }
    }}
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