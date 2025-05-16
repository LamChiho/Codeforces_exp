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
    string s;
    cin>>s;
    int sz=s.length(),cr=0;
    for(int i=(sz-1);i>1;i--){
        if(s[i]=='C'){
            for(int j=(i-1);j-(i-j)>-1;j--){
                if(s[j]=='B'&&s[j-(i-j)]=='A')cr++;
            }
        }
    }
    cout<<cr<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}