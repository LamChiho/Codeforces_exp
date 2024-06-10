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
    cin>>n;
    vector<long long>va(n);
    vector<long long>vb(n+1);
    for(int i=0;i<n;i++)cin>>va[i];
    for(int i=0;i<=n;i++)cin>>vb[i];
    long long t1=0,t2=1000000009,cans;
    for(int i=0;i<n;i++){
        if(va[i]>vb[i]){
            t1+=(va[i]-vb[i]);
            if((vb[n]>=vb[i])&&(vb[n]<=va[i])){
                t2 = 1;
            }
            else if(vb[n]<vb[i]){
                t2 = min(t2,vb[i]-vb[n]+1);
            }
            else{
                t2 = min(t2,vb[n]-va[i]+1);
            }
        }
        else {
            t1+=(vb[i]-va[i]);
            if((vb[n]<=vb[i])&&(vb[n]>=va[i])){
                t2 = 1;
            }
            else if(vb[n]>vb[i]){
                t2 = min(t2,vb[n]-vb[i]+1);
            }
            else{
                t2 = min(t2,va[i]-vb[n]+1);
            }
        }                
    }
    cans = t1+t2;
    cout<<cans<<"\n";
}


int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}