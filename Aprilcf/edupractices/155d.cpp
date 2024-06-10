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
    int n,iptn,n1,n2,curn;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    long long v1,v2,ts=0,cur=1,ttn,forcalc;
    int mod=998244353;
    for(int i=0;i<30;i++){
        v1=1;
        v2=0;
        curn=0;
        n1=1;//n1 is the even positions
        n2=0;
        for(int j=0;j<n;j++){
            if((vc[j]&cur)>0){
                curn++;
            }
            if((curn%2)==1){
                ts+=((v1)*cur);
                n2++;

            }
            else{
                ts+=((v2)*cur);
                n1++;
            }
            v1+=n1;
            v2+=n2;
            v1%=mod;
            v2%=mod;
            ts%=mod;
        }
        cur*=2;
        //cout<<ts<<"\n";
    }
    
    cout<<ts<<"\n";
    return;
}


int main() {
    // Write C++ code here
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}