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
    int n,m,k,iptn;
    cin>>n>>m>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    sort(vc.begin(),vc.end());
    long long ttcost=0,curcost,aldticket=0;
    for(int num:vc){
        if(k>0){
            if(k>=m){
                curcost=num;
                curcost+=aldticket;
                curcost*=m;
                ttcost+=curcost;
                aldticket+=m;
                k-=m;
            }
            else{
                curcost=num;
                curcost+=aldticket;
                curcost*=(k%m);
                ttcost+=curcost;
                aldticket+=(k%m);
                k=0;

            }
        }
    }
    cout<<ttcost<<"\n";
    return;
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}