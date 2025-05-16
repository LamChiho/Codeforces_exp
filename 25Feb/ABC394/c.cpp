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
    int n=s.length();
    vector<char>vc(n);
    for(int i=0;i<n;i++)vc[i]=s[i];
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            for(int j=i-1;j>-1;j--){
                if(vc[j]=='W'){
                vc[i]='C';
                vc[j]='A';
                vc[j+1]='C';}
                else break;
            }
        }
    }
    for(int i=0;i<n;i++)cout<<vc[i];
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}