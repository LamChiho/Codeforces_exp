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
    vector<int>rec(n+1,0);
    int cnt=0,x,p1,pn;
    for(int i=0;i<n;i++){
        cin>>x;
        if(rec[x]==0)cnt++;
        rec[x]++;
        if(x==1)p1=(i+1);
        if(x==n)pn=(i+1);
    }
    if(cnt==n){
        int v1,v2;
        cout<<"? "<<p1<<' '<<pn<<"\n";
        cout.flush();
        cin>>v1;
        cout<<"? "<<pn<<' '<<p1<<"\n";
        cout.flush();
        cin>>v2;
        if(v1==v2&&v1>=(n-1)){cout<<"! B\n";
        cout.flush();}
        else {cout<<"! A\n";
        cout.flush();}
    }
    else{
        int fromn=-1,targn=-1;
        for(int i=1;i<=n;i++){
            if(rec[i]==0)fromn=i;
            else targn=i;
            if(fromn>-1&&targn>-1)break;
        }
        cout<<"? "<<fromn<<' '<<targn<<"\n";
        cout.flush();
        int v;
        cin>>v;
        if(v==0){
            cout<<"! A\n";
            cout.flush();
        }
        else{
            cout<<"! B\n";
            cout.flush();
        }
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