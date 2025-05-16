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
    vector<int>vc;
    while(n>0){
        vc.emplace_back(n%10);
        n/=10;
    }
    if(vc[0]%2){
        if(vc.back()%2){
            for(int i=1;i<vc.size();i++){
                if(vc[i]%2==0){
                    cout<<"2\n";
                    return;
                }
            }
            cout<<"-1\n";
            return;
        }
        else cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
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