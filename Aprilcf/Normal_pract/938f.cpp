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
    int n1,n2,n3,n4,cur=0;
    cin>>n1>>n2>>n3>>n4;
    cur+=(n1/2);
    cur+=(n2/2);
    cur+=(n3/2);
    cur+=(n4/2);
    n1%=2;
    n2%=2;
    n3%=2;
    if(n1==1){
        if(n2==1){
            if(n3==1){
                cur++;
            }
        }
    }
    cout<<cur<<"\n";
    return;
}


int main() {
    // Write C++ code here
    
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}