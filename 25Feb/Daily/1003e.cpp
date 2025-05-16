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

constexpr ll mod=998244353;


void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int v1=n,v2=m;
    if(max(n,m)<k){
        cout<<"-1\n";
        return;
    }
    else{
        int cur;
        vector<int>pt(n+m,-1);
        if(n>m){
            cur=0;
            for(int i=0;i<k;i++){
                pt[i]=cur;
                v1--;
            }
            if(v2<v1){
                cout<<"-1\n";
                return;
            }
            cur=1-cur;
            for(int i=k;i<(n+m);i++){
                if(cur==0)v1--;
                else v2--;
                pt[i]=cur;
                if(v1>0&&v2>0)cur^=1;
                else{
                    if(v1>0)cur=0;
                    else cur=1;
                }
            }
            if(v1<0||v2<0){
                cout<<"-1\n";
                return;
            }
            else{
                for(auto num:pt)cout<<num;
                cout<<"\n";
            }
        }
        else{
            cur=1;
            for(int i=0;i<k;i++){
                pt[i]=cur;
                v2--;
            }
            if(v1<v2){
                cout<<"-1\n";
                return;
            }
            cur=1-cur;
            for(int i=k;i<(n+m);i++){
                if(cur==0)v1--;
                else v2--;
                pt[i]=cur;
                if(v1>0&&v2>0)cur^=1;
                else{
                    if(v1>0)cur=0;
                    else cur=1;
                }
            }
            if(v1<0||v2<0){
                cout<<"-1\n";
                return;
            }
            else{
                for(auto num:pt)cout<<num;
                cout<<"\n";
            }
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