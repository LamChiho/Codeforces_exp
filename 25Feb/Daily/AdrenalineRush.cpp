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
    vector<int>rec(n+1,-1);
    vector<int>vc(n);
    vector<int>cpos(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        rec[vc[i]]=i;
        cpos[i]=n-i;
    }
    int cur=0;
    vector<pair<int,int>>vp;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cur++;
            vp.emplace_back(make_pair(j,i));
        }
    }
    int cgv,cp;
    for(int i=n;i>0;i--){
        cp=(n-i);
        while(cp>0){
            if(rec[cpos[cp]]<rec[cpos[cp-1]]){
                cur++;
                vp.emplace_back(make_pair(cpos[cp],cpos[cp-1]));
                cgv=cpos[cp];
                cpos[cp]=cpos[cp-1];
                cpos[cp-1]=cgv;
                cp--;
            }
            else break;
        }
    }
    cout<<cur<<"\n";
    for(auto pr:vp)cout<<pr.first<<' '<<pr.second<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}