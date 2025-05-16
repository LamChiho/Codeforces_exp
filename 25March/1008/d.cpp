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

ll cans;

void helper(int line,int depth, int mxn,vector<pair<char,char>>&vp1,vector<pair<int,int>>&vp2,vector<pair<ll,ll>>&vp3){
    if(depth==mxn){
        if(line==0){
            if(vp1[depth].first=='+'){
                vp3[depth].first = 1;
                cans+=vp2[depth].first;
                if(depth==0)cans++;
            }
            else{
                vp3[depth].first = vp2[depth].first;
                if(depth==0)cans+=vp3[depth].first;
            }
        }
        else{
            if(vp1[depth].second=='+'){
                vp3[depth].second = 1;
                cans+=vp2[depth].second;
                if(depth==0)cans++;
            }
            else{
                vp3[depth].second = vp2[depth].second;
                if(depth==0)cans+=vp3[depth].second;
            }
        }
    }
    else{      
        if(line==0){
            if(vp1[depth].first=='+'){
                vp3[depth].first = vp3[depth+1].first;
                cans+=(0LL+vp2[depth].first)*max(vp3[depth+1].first,vp3[depth+1].second);
                if(depth==0)cans+=vp3[depth].first;
            }
            else{
                vp3[depth].first =(vp2[depth].first-1)*max(vp3[depth+1].first,vp3[depth+1].second)+vp3[depth+1].first;
                if(depth==0)cans+=vp3[depth].first;
            }
        }
        else{
            if(vp1[depth].second=='+'){
                vp3[depth].second = vp3[depth+1].second;
                cans+=(0LL+vp2[depth].second)*max(vp3[depth+1].first,vp3[depth+1].second);
                if(depth==0)cans+=vp3[depth].second;
            }
            else{
                vp3[depth].second =(vp2[depth].second-1)*max(vp3[depth+1].first,vp3[depth+1].second)+vp3[depth+1].second;
                if(depth==0)cans+=vp3[depth].second;
            }
        }
    }
}



void solve() {
    cans=0LL;
    int n;
    cin>>n;
    vector<pair<char,char>>vp1(n);
    vector<pair<int,int>>vp2(n);
    vector<pair<ll,ll>>vp3(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(j%2){
                if(j>1)cin>>vp2[i].second;
                else cin>>vp2[i].first;
            }
            else{
                if(j>0)cin>>vp1[i].second;
                else cin>>vp1[i].first;
            }
        }
    }
    vector<vector<ll>>rec(n,vector<ll>(2));
    for(int i=n-1;i>-1;i--){
        helper(0,i,n-1,vp1,vp2,vp3);
        helper(1,i,n-1,vp1,vp2,vp3);
    }
    cout<<cans<<"\n";
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