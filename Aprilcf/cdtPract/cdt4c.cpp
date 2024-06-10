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
    long long n,c,d,iptn;
    long long cans=-1,cp,reachcos=0,delcos=0;
    cin>>n>>c>>d;
    vector<long long>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    sort(vc.begin(),vc.end());
    int cup=0;
    if(vc[0]==1){
        cans=(n-1);
        cans*=c;
        cup++;
    }
    else{
        reachcos=d;
        cans=(n);
        cans*=c;
        cans+=d;
    }
    int reached=1;
    for(int i=cup;i<n;i++){
        if(vc[i]>reached){
            reachcos+=d*(vc[i]-1-reached);
            cp = 0;
            cp+=(c*(n-i-1));
            cp+=reachcos+delcos;
            if(cp<cans){
                cans=cp;
            }
        }
        else{
            delcos+=c;
            cp = c*(n-i)+reachcos+delcos;
            if(cp<cans){
                cans=cp;
            }
        }
        reached=vc[i];
    }
    cout<<cans<<"\n";
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}