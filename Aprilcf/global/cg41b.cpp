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
#include <iostream>
#include <string_view>



void solve(){
    int n,m,k,iptn,ln;
    cin>>n>>m>>k;
    vector<int>vc(n-1);
    for(int i=0;i<n;i++){
        cin>>iptn;
        if(i>0){
            vc[i-1]=iptn-ln-1;
        }
        ln = iptn;
    }
    sort(vc.begin(),vc.end());
    int ald_us=n;
    for(int i=0;(i+k)<n;i++){
        ald_us+=vc[i];
    }
    cout<<ald_us<<"\n";

}


int main() {
    // Write C++ code here
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}