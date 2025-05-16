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
    int cans=0;
    vector<int>vc(n);
    vector<int>rec(101,0);
    vector<int>k(101,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        rec[vc[i]]++;
    }
    for(int i=99;i>-1;i--){
        k[i]=k[i+1]+rec[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<(1+k[vc[i]])<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}