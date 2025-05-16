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
    string s;
    cin>>s;
    int n=s.length(),curp=1,cr=0;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            if(curp%2)curp++;
        }
        else{
            if(curp%2==0)curp++;
        }
        curp++;
    }
    if(curp%2==0)curp++;
    cr=(curp-1-n);
    cout<<cr<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}