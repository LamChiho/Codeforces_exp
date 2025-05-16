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
typedef long long ll; 

constexpr ll mod=998244353;

ll cur;

void solve() {
    int n;
    cin>>n;
    int cv=0,cur=1;
    for(int i=0;i<30;i++){
        if(cur&n){
            //cout<<cv<<' '<<(cv&n)<<"\n";
            if((cv&n)==0&&cv!=0){
                cv|=cur;
                if(cv<n)cout<<cv<<"\n";
                else cout<<"-1\n";
                return;
            }
            cv|=cur;
        }
        else {
            if(cv&n){
                cv|=cur;
                if(cv<n)cout<<cv<<"\n";
                else cout<<"-1\n";
                return;
            }
            cv|=cur;
        }
        //cout<<cv<<' ';
        cur<<=1;
    }
    cout<<"-1\n";
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