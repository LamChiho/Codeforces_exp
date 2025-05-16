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
    int n,t;
    cin>>n;
    string s;
    int cans=-1,n0=0,n1=-1,n2=-1,n3=-1;
    for(int i=0;i<n;i++){
        cin>>t>>s;
        if(s=="11"){
            if(n3==-1)n3=t;
            else n3=min(n3,t);
        }
        else if(s=="01"){
            if(n2==-1)n2=t;
            else n2=min(n2,t);
            if(n1!=-1){if(n3==-1)n3=n1+t;
            else n3=min(n3,n1+t);}
        }
        else if(s=="10"){
            if(n1==-1)n1=t;
            else n1=min(n1,t);
            if(n2!=-1){if(n3==-1)n3=n2+t;
            else n3=min(n3,n2+t);}
        }
    }
    cout<<n3<<"\n";
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