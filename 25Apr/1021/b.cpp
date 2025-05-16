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


void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    int cans=0;
    set<int>st;
    for(int i=0;i<n;i++){
        if(st.find(vc[i])==st.end()){
            //cout<<i<<' '<<n-1-i<<"\n";
            if(i==(n-1-i)){cans++;
                st.insert(vc[i]);}
            else if(i<(n-1-i)){
                if((i+k)>=(n-2-i)){cans++;
                    st.insert(vc[i]);}
            }
            else{
                if((i-k)<=(n-i)){cans++;
                    st.insert(vc[i]);}
            }
        }
        //cout<<cans<<"b\n";
        if((i+1)<n)if(vc[i+1]>vc[i]){
            if((i+1)==(n-1-i))cans+=(vc[i+1]-1-vc[i]);
            else if((i+1)<(n-1-i)){
                if((i+k+1)>=(n-1-i))cans+=(vc[i+1]-1-vc[i]);
            }
            else{
                if((i-k+1)<=(n-i-1))cans+=(vc[i+1]-1-vc[i]);
            }
        }
        //cout<<cans<<"a\n";
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}