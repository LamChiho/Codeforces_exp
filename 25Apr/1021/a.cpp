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

bool helper(vector<int>&v1,vector<int>&v2,int skipped,int n,int m){
    int p1=0,p2=0;
    if(v2[0]<=skipped)p2++;
    for(int i=0;i<n;i++){
        if(v1[i]>=v2[p1]){
            p1++;
        }
        if(v1[i]>=v2[p2]){
            p2++;
        }
        if(skipped>=v2[p1]&&p1<m)p2=max(p2,p1+1);
        if(p1>=m||p2>=m)return true;
    }
    return false;
}


void solve() {
    string s;
    cin>>s;
    int n=10;
    vector<int>rec(10,0);
    for(int i=0;i<10;i++){
        rec[(s[i]-'0')]++;
    }
    vector<int>pt(10,0);
    for(int i=0;i<10;i++){
        for(int j=9-i;j<10;j++){
            if(rec[j]>0){
                pt[i]=j;
                rec[j]--;
                break;
            }
        }
        cout<<pt[i];
    }
    cout<<"\n";
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