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
    int b,k,iptn,cur=0;
    cin>>b>>k;
    for(int i=0;i<k;i++){
        cin>>iptn;
        if((i+1)!=k){
            if((b%2)==0){
                cur+=0;
            }
            else if((iptn%2)==0){
                cur+=0;
            }
            else{
                cur++;
            }

        }
        else{
            if((iptn%2)==0){
                cur+=0;
            }
            else{
                cur++;
            }
        }
    }
    if((cur%2)==0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
}


int main() {
    // Write C++ code here
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}