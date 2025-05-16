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
    vector<int>vc(14,0);
    int x;
    for(int i=0;i<7;i++){
        cin>>x;
        vc[x]++;
    }
    bool t2=false,t3=false;
    for(int i=1;i<14;i++){
        if(vc[i]>2){
            if(t3==false)t3=true;
            else if(t2==false)t2=true;
        }
        else if(vc[i]>1){
            if(t2==false)t2=true;
        }
    }
    if(t2&&t3)cout<<"Yes\n";
    else cout<<"No\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}