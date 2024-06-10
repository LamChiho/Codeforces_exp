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

int gcd(int n1,int n2){
    int n3=max(n1,n2);
    n2 = min(n1,n2);
    n1 = n3;
    while((n1%n2)!=0){
        n3=n1%n2;
        n1=n2;
        n2=n3;
    }
    return n2;
}

void solve(){
    int n;
    cin>>n;
    int zero_exist=1,changed=0;
    while(zero_exist<=n){
        if((zero_exist&n)==0){
            changed++;
            n+=zero_exist;
        }
        zero_exist*=2;
    }
    if(changed!=0){
        cout<<n<<"\n";
    }
    else{
        zero_exist=1;
        int another=0;
        while(((another+zero_exist)*3)<=n){
            another+=zero_exist;
            zero_exist*=4;
        }
        if((n^another)%(n&another)==0){
            cout<<another<<"\n";
        }
        else{
            int curmx=1;
            for(int j=2;(j*j)<=n;j++){
                if((n%j)==0){
                    curmx = n/j;
                    cout<<curmx<<"\n";
                    return;
                }
            }
            cout<<1<<"\n";
        }
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