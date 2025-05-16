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

void helper(int t,int pos,vector<vector<int>>&rec,string &s){
    vector<int>vc(3,-1);
    if(t==0)rec[t][pos]=1-(s[pos]-'0');
    else{
        for(int i=0;i<3;i++){helper(t-1,pos*3+i,rec,s);
        vc[i]=rec[t-1][pos*3+i];}
        sort(vc.begin(),vc.end());
        rec[t][pos]=vc[0]+vc[1];
    }
}

void helper1(int t,int pos,vector<vector<int>>&rec,string &s){
    vector<int>vc(3,-1);
    if(t==0)rec[t][pos]=(s[pos]-'0');
    else{
        for(int i=0;i<3;i++){helper1(t-1,pos*3+i,rec,s);
        vc[i]=rec[t-1][pos*3+i];}
        sort(vc.begin(),vc.end());
        rec[t][pos]=vc[0]+vc[1];
    }
}


void solve() {
    int n;
    cin>>n;
    string s,ns;
    cin>>s;
    vector<vector<int>>rec(n+1,vector<int>(s.length(),-1));
    helper(n,0,rec,s);
    if(rec[n][0]==0)helper1(n,0,rec,s);
    cout<<rec[n][0]<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}