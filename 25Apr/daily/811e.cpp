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
    vector<int>v1(n);
    bool t1=false,t2=false,t3=false;
    for(int i=0;i<n;i++){
        cin>>v1[i];
        if(v1[i]%5==0)t1=true;
    }
    if(t1){
        int n1=-1;
        for(int i=0;i<n;i++){
            if(i==0)n1=v1[i]+v1[i]%10;
            else{
                if(n1!=(v1[i]+v1[i]%10)){
                    cout<<"No\n";
                    return;
                }
            }
        }
        cout<<"Yes\n";
    }
    else{
        int n1=-1;
        for(int i=0;i<n;i++){
            while(v1[i]%10!=2)v1[i]+=v1[i]%10;
            if(v1[i]%20==2)t3=true;
            else t2=true;
        }
        if(t2&&t3)cout<<"No\n";
        else cout<<"Yes\n";
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