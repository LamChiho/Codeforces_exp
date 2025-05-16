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
    vector<int>vc((n*(n-1))/2);
    for(int i=0;i<vc.size();i++)cin>>vc[i];
    int cbd=n-1;
    sort(vc.begin(),vc.end());
    int cv=vc[0],cl=1;
    for(int i=1;i<vc.size();i++){
        if(cv==vc[i])cl++;
        else{
            while(cl>0){
                cl-=cbd;
                cbd--;
                cout<<cv<<' ';
            }
            cl=1;
            cv=vc[i];
        }
    }
    while(cl>0){
        cl-=cbd;
        cbd--;
        cout<<cv<<' ';
    }
    cout<<1000000000<<"\n";
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