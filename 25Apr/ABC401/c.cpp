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

constexpr ll mod=998244353,md2=1000000000;


void solve() {
    int n,k;
    cin>>n>>k;
    if(n<k)cout<<"1\n";
    else{
        ll su=0;
        int cur=0;
        deque<ll>dq;
        for(int i=0;i<k;i++){
            dq.emplace_back(1);
            su+=1;
        }
        int cp=k-1;
        while(cp<n){
            dq.emplace_back(su);
            su+=su;
            su-=dq[0];
            dq.pop_front();
            cp++;
            su%=md2;
            if(su<0)su+=md2;
        }
        cout<<dq[k-1]<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}