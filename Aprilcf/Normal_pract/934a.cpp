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
#include <iostream>
#include <string_view>



void solve(){
    int n,k,inner=0,outer,nxt=1,removed=0;
    cin>>n>>k;
    //n points, nxt points inside, so for each point, n-nxt edges must be removed
    for(int i=1;i<n;i++){
        inner=i;
        inner*=(n-i);
        if(k>=inner){
            removed=i;
        }
    }
    outer=n-removed;
    cout<<outer<<"\n";
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}