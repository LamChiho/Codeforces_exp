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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n;
    cin>>n;
    vector<int>vc;
    int x,tg=1,sz=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0){
            cout<<"1";
            sz++;
            vc.emplace_back(x);
        }
        else if(tg){
            if(x>=vc[sz-1]){vc.emplace_back(x);
            cout<<"1";
            sz++;}
            else if(x<=vc[0]){
                tg--;
                vc.emplace_back(x);
                sz++;
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        else{
            if(x>=vc[sz-1]&&x<=vc[0]){
                cout<<"1";
                sz++;
                vc.emplace_back(x);
            }
            else{
                cout<<"0";
            }
        }
    }
    cout<<"\n";
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