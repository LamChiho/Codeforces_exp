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
    for(int i=0;i<n;i++){
        cin>>vc[i];
        if(i>=2){
            if(vc[i]==vc[i-1]&&vc[i]==vc[i-2]){
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}