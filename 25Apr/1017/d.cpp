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
    string s1,s2;
    cin>>s1>>s2;
    if(s1[0]!=s2[0]){
        cout<<"No\n";
        return;
    }
    else{
        int p1=0,p2=0,n1=0,n2=0;
        char lc=s1[0];
        while(p1<s1.length()||p2<s2.length()){
            while(p1<s1.length()&&s1[p1]==lc){
                p1++,n1++;
            }
            while(p2<s2.length()&&s2[p2]==lc){
                p2++,n2++;
            }
            if(n1*2<n2||n1>n2){
                cout<<"No\n";
                return;
            }
            if(p1<s1.length())lc=s1[p1];
            if(p2<s2.length())lc=s2[p2];
            n1=0,n2=0;
        }
        if(n1*2<n2||n1>n2){
            cout<<"No\n";
            return;
        }
        cout<<"Yes\n";
    }
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