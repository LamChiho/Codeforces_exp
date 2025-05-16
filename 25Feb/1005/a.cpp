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
    int n;
    string s;
    cin>>n>>s;
    int cr=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&cr==0)cr++;
        else{
            if(i>0&&cr>0){
                if(s[i]!=s[i-1])cr++;
            }
        }
    }
    cout<<cr<<"\n";
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