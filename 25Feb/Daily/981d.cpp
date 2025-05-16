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


void solve() {
    int n,cans=0;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    ll su=0;
    set<ll>us;
    us.insert(0);
    for(auto num:vc){
        su+=num;
        if(us.find(su)!=us.end()){
            cans++;
            us.clear();
            us.insert(0);
            su=0;
        }
        else{
            us.insert(su);
        }
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}