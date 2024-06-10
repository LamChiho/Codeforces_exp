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

vector<int>vc(70);

void solve(){
    long long n,iptn,cmi=1000000000,cmx=0,n1,n2;
    cin>>n;
    int cp=0;
    for(int i=0;i<n;i++){
        cin>>iptn;
        cmi=min(cmi,iptn);
        cmx=max(cmx,iptn);
        if(i<70){
            vc[i]=0;
        }
    }
    while(cmi<cmx){
        n1=cmi%2;
        n2=cmx%2;
        if(n1>n2){
            vc[cp]=1;
            cmi++;
            cmx++;
        }
        cmi/=2;
        cmx/=2;
        cp++;
    }
    if(cp>n){
        iptn=cp;
        cout<<iptn<<"\n";
    }
    else{
        iptn=cp;
        cout<<iptn<<"\n";
        for(int i=0;i<cp;i++){
            cout<<vc[i]<<' ';
        }
        cout<<"\n";
    }
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}