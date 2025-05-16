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
    int q;
    cin>>q;
    vector<int>vc;
    for(int i=0;i<100;i++)vc.emplace_back(0);
    int x,v;
    for(int i=0;i<q;i++){
        cin>>x;
        if(x==1){
            cin>>v;
            vc.emplace_back(v);
        }
        else{
            cout<<vc.back()<<"\n";
            vc.pop_back();
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}