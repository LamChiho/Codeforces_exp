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
    int n,m;
    cin>>n>>m;
    vector<string>v1(n);
    vector<string>v2(m);
    bool trig;
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    for(int i=0;i<(n-m+1);i++){
        for(int j=0;j<(n-m+1);j++){
            trig=true;
            for(int l1=0;l1<m;l1++){
                for(int l2=0;l2<m;l2++){
                    if(v1[l1+i][l2+j]!=v2[l1][l2])trig=false;
                }
            }
            if(trig){
                cout<<(i+1)<<' '<<(j+1)<<"\n";
                return;
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}