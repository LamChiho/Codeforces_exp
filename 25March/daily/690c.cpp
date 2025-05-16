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

constexpr ll mo=998244353;

ll cur;

void solve() {
    int n;
    cout<<(1<<2)<<"\n";
    cin>>n;
    vector<string>vs(51,"-");
    vector<string>rec(51,"");
    vector<char>cs;
    for(int i='1';i<='9';i++)cs.emplace_back(i);
    for(int i=1;i<10;i++){
        if(i==1){vs[1]="1";
        vs[0]="";}
        else{
            for(int j=i;j<51;j++){
                if(vs[j-i]!="-")rec[j]=vs[j-i];
                else rec[j]='-';
            }
            for(int j=i;j<51;j++){
                if(rec[j]!="-")vs[j]=rec[j]+(cs[i-1]);
            }
        }
    }
    if(vs[n]!="-")cout<<vs[n]<<"\n";
    else cout<<"-1\n";
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