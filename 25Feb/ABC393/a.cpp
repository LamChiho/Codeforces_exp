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
    string s1,s2;
    cin>>s1>>s2;
    if(s1=="sick"){
        if(s2=="sick")cout<<"1\n";
        else cout<<"2\n";
    }
    else{
        if(s2=="sick")cout<<"3\n";
        else cout<<"4\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}