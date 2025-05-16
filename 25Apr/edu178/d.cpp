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
#include<set>
#include<map>
typedef long long ll; 

constexpr ll mod=998244353;

vector<int>isPrime(10000001,1);
vector<ll>cums(400001,0);

void helper(){
    int curp=1;
    for(ll i=2;i<10000001;i++){
        if(isPrime[i]==1){
        cums[curp]=cums[curp-1]+i;
        curp++;
        if(curp>400000)return;
        for(int j=i;j*i<10000001;j++){
            isPrime[j*i]=0;
        }}
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    int cl=0;
    ll csu=0;
    for(int i=0;i<n;i++){
        csu+=vc[n-1-i];
        if(csu<cums[i+1])break;
        else cl++;
    }
    cout<<(n-cl)<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    int t;
    cin>>t;
    helper();
    while(t>0){
        solve();
        t--;
    }
}