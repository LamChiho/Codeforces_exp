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
    int q,t,x;
    cin>>q;
    vector<int>pt;
    int cp=0;
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==2){
            cout<<pt[cp]<<"\n";
            cp++;
        }
        else {cin>>x;pt.emplace_back(x);}
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}