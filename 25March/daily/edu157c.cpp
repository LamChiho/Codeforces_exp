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

ll cur;

void solve() {
    int n,s1,s2;
    cin>>n;
    string s;
    int le;
    int fv;
    vector<map<int,int>>fore(6);
    vector<map<int,int>>back(6);
    ll cans=0;
    vector<string>vs(n);
    for(int i=0;i<n;i++){
        cin>>vs[i];
        s=vs[i];
        le=s.length();
        if(le%2){
            for(int l=1+le/2;l<=le;l++){
                s1=0,s2=0;
                for(int j=0;j<l;j++){
                    s1+=(s[j]-'0');
                }
                for(int j=0;j<(le-l);j++){
                    s2+=(s[le-j-1]-'0');
                }
                fore[l*2-le][s1-s2]++;
            }
            for(int l=1;l*2<le;l++){
                s1=0,s2=0;
                for(int j=0;j<l;j++){
                    s1+=(s[j]-'0');
                }
                for(int j=0;j<(le-l);j++){
                    s2+=(s[le-j-1]-'0');
                }
                back[le-l*2][s2-s1]++;
            }
        }
        else{
            for(int l=1+le/2;l<=le;l++){
                s1=0,s2=0;
                for(int j=0;j<l;j++){
                    s1+=(s[j]-'0');
                }
                for(int j=0;j<(le-l);j++){
                    s2+=(s[le-j-1]-'0');
                }
                fore[l*2-le][s1-s2]++;
            }
            for(int l=1;l*2<le;l++){
                s1=0,s2=0;
                for(int j=0;j<l;j++){
                    s1+=(s[j]-'0');
                }
                for(int j=0;j<(le-l);j++){
                    s2+=(s[le-j-1]-'0');
                }
                back[le-l*2][s2-s1]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        s=vs[i];
        le=s.length();
        if(le%2){
            s1=0;
            for(int j=0;j<le;j++)s1+=(s[j]-'0');
            cans+=fore[le][s1];
            cans+=back[le][s1];
        }
        else{
            s1=0;
            for(int j=0;j<le;j++)s1+=(s[j]-'0');
            cans+=fore[le][s1];
            cans+=back[le][s1];
        }
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}