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
    int n,m,k;
    cin>>n>>m>>k;
    int bd1=n/(m+1),res=n%(m+1);
    if(bd1==0){
        for(int i=0;i<n;i++)cout<<"0 ";
        cout<<"\n";
    }
    else{
        for(int i=0;i<(m+1);i++){
            for(int j=0;j<bd1;j++)cout<<j<<' ';
            if(res){
                cout<<bd1<<' ';
                res--;
            }
        }
        cout<<"\n";
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