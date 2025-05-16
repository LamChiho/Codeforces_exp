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
    vector<int>v1(n);
    vector<int>v2(n);
    int solid=-1;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n;i++){        
        if(v2[i]!=-1){
            if(solid==-1)solid=(v1[i]+v2[i]);
            else if(solid!=(v1[i]+v2[i])){
                cout<<"0\n";
                return;
            }
        }
        else{
            if(solid!=-1){
                if(v1[i]>solid){
                    cout<<"0\n";
                    return;
                }
            }
        }
    }
    if(solid==-1){
        int miv=k,mxv=0;
        for(int num:v1){miv=min(num,miv);mxv=max(num,mxv);}
        int mis=mxv-miv;
        cout<<(k+1-mis)<<"\n";
    }
    else{
        for(int i=0;i<n;i++){
            if(v2[i]==-1){
                if((solid-v1[i])<0||(solid-v1[i])>k){
                    cout<<"0\n";
                    return;
                }
            }
        }
        cout<<"1\n";
    }
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