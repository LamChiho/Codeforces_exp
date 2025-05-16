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
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    int ln=vc[0],cnt=1,mxm=vc[0];
    for(int i=1;i<n;i++){
        if(vc[i]<=mxm)cnt++;
        else{
            if((cnt%2)==0){
                ln=vc[i],cnt=1,mxm=vc[i];
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        mxm=max(mxm,ln+(cnt/2));
    }
    if((cnt%2)==0)cout<<"YES\n";
    else cout<<"NO\n";
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