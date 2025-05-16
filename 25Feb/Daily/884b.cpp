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
    int n;
    cin>>n;
    if(n<3){
        for(int i=1;i<=n;i++)cout<<i<<' ';
        cout<<"\n";
    }
    else{
        cout<<"2 ";
        int bg=1,cur=4;
        for(int i=2;i<n;i++){
            if(bg>0){
                if((i*2)>=n){
                    bg--;
                    cout<<"1 ";
                }
                else{
                    cout<<cur<<' ';
                    cur++;
                }
            }
            else{
                cout<<cur<<' ';
                cur++;
            }
        }
        cout<<"3\n";
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