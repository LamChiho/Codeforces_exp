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
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    int locked=0;
    int cn=0,numb=0;
    sort(vc.begin(),vc.end());
    for(int i=0;i<n;i++){
        if(cn==vc[i])numb++;
        else if((numb>1&&vc[i]==(cn+1))||(locked&&vc[i]==(cn+1))){
            numb=1;
            cn=vc[i];
            locked=1;
        }
        else{
            numb=1;
            cn=vc[i];
            locked=0;
        }
        if(locked>0&&numb>1){
            cout<<"Yes\n";
            return;
        }
        if(numb>3){
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
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}