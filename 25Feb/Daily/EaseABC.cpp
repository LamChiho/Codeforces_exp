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

string s;

void helper(int p1,int p2,int d1,int d2,vector<pair<int,int>>&vp,vector<string>&vs,string cs){
    if(cs.length()==3){s=min(s,cs);
    return;}
    for(auto pr:vp){
        if(pr.first!=-d1||pr.second!=-d2){
            if((p1+pr.first)<3&&(p1+pr.first)>-1&&(p2+pr.second)<3&&(p2+pr.second)>-1)
            helper(p1+pr.first,p2+pr.second,pr.first,pr.second,vp,vs,cs+vs[p1][p2]);
        }
    }
}

void solve() {
    vector<string>vs(3);
    s="zzz";
    for(int i=0;i<3;i++)cin>>vs[i];
    vector<pair<int,int>>vp;
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            if(i!=0||j!=0)vp.emplace_back(make_pair(i,j));
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            helper(i,j,-2,-2,vp,vs,"");
        }
    }
    cout<<s<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}