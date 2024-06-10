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
    int n;
    string s;
    cin>>n>>s;
    int lt=0,n1=-1,n2=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            lt++;
            n1=n2;
            n2=i;
        }
    }
    if((lt%2)==1){
        cout<<"NO\n";
        return;
    }
    else if(lt==2){
        n1++;
        if(n1!=n2){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    else{
        cout<<"YES\n";
        return;
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