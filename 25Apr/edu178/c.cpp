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
    cin>>n;
    string s;
    cin>>s;
    if(n==2){
        if(s[0]=='A'){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    else if(s[0]==s[n-1]){
        if(s[0]=='A'){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    else{
        int n1=0,n2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A')n1++;
            else n2++;
        }
        if(n2==1){
            cout<<"Alice\n";
            return;
        }
        if(n1==1){
            cout<<"Bob\n";
            return;
        }
        if(s[n-1]=='A'&&s[n-2]=='A'){
            cout<<"Alice\n";
        }
        else cout<<"Bob\n";
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