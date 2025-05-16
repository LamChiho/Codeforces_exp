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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>fp(k,-1);
    vector<vector<int>>mp(n,vector<int>(k,-1));
    vector<int>cp(k,-1);
    for(int i=0;i<n;i++){
        if(fp[s[i]-'a']==-1)fp[s[i]-'a']=i;
        for(int j=i-1;j>=max(0,cp[s[i]-'a']);j--){
            mp[j][s[i]-'a']=i;
        }
        cp[s[i]-'a']=i;
    }
    int q;
    cin>>q;
    string s1;
    int curpos,pt,mxpos,le,minia;
    vector<int>recd(n,-1);
    for(int i=n-1;i>-1;i--){
        minia=-1;
        for(int j=0;j<k;j++){
            if(mp[i][j]==-1){
                recd[i]=1;
                break;
            }
            else{
                minia=max(minia,mp[i][j]);
            }
        }
        if(recd[i]!=1)recd[i]=1+recd[minia];
    }
    while(q>0){
        q--;
        cin>>s1;
        pt=0;
        for(int i=0;i<s1.length();i++){
            if(i==0)curpos=fp[s1[i]-'a'];
            else{
                curpos=mp[curpos][s1[i]-'a'];
            }
            if(curpos==-1){
                cout<<"0\n";
                pt++;
                break;
            }
        }
        if(pt==0){
            le=0;
            if(curpos!=-1){
                mxpos=-1;
                le=recd[curpos];
            }
            cout<<le<<"\n";
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}