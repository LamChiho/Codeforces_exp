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
    int x,k;
    cin>>x>>k;    
    if(k==2&&x==1){
        cout<<"Yes\n";
        return;
    }
    else if(k==1&&x==1){
        cout<<"No\n";
        return;
    }
    else if(k>1){
        cout<<"No\n";
        return;
    }
    else{
        int cur=2;
        while((cur*cur)<=x){
            if((x%cur)==0){
                cout<<"No\n";
                return;
            }
            cur++;
        }
        cout<<"Yes\n";
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