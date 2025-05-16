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
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<int>rec(n,-1);
    int zeros=0,cans=1,nonzeros=0,nxn=1,v;
    priority_queue<int>rightq;
    for(int i=(n-1);i>-1;i--){
        rightq.push(-vc[i]);
        if(vc[i]==0){
            cans=max(cans,1+nonzeros);
            zeros++;
        }
        else{
            cans=max(cans,nonzeros);
            nonzeros++;
        }
        while(rightq.size()>0){
            v=rightq.top();
            if((nxn+v)==0){
                nxn++;
                rightq.pop();
            }
            else if((nxn+v)>0)rightq.pop();
            else break;
        }
        rec[i]=nxn;
    }
    cans=max(cans,nonzeros);
    if(rec[0]==-1)cout<<n<<"\n";
    else{
        int ccn=0,lmv=1000000009;
        for(int i=0;i<(n);i++){
            if(vc[i]==0){
                cout<<(nonzeros+1)<<"\n";
                return;
            }
            else{
                if(i==(n-1))break;
                lmv=min(lmv,vc[i]);
                if(lmv<rec[i+1])break;
            }
        }
        cout<<cans<<"\n";
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