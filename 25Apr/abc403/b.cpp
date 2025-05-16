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
    string t,u;
    cin>>t>>u;
    int n1=t.length(),n2=u.length();
    int p1,p2;
    for(int i=0;(i+n2)<=n1;i++){
        p1=i,p2=0;
        while(p1<n1&&p2<n2){
            if(t[p1]=='?')p1++,p2++;
            else if(t[p1]==u[p2])p1++,p2++;
            else break;
        }
        if(p2==n2){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}