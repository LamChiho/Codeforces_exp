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
    vector<vector<int>>vc(2,vector<int>(2));
    cin>>vc[0][0]>>vc[0][1]>>vc[1][0]>>vc[1][1];
    int exc;
    for(int i=0;i<4;i++){
        exc=vc[0][0];
        vc[0][0]=vc[1][0];
        vc[1][0]=vc[1][1];
        vc[1][1]=vc[0][1];
        vc[0][1]=exc;
        if(vc[0][0]<vc[0][1]&&vc[1][0]<vc[1][1]&&vc[0][0]<vc[1][0]&&vc[0][1]<vc[1][1]){cout<<"Yes\n";return;}
    }
    cout<<"No\n";
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