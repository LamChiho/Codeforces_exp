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

bool helper(vector<int>&vc,int targ,int targnum){
    int nxt=0,numb=0,cv=1,cnt=0;
    vector<int>seen(targnum,0);
    for(int num:vc){
        if(num<targnum&&seen[num]!=cv){
            seen[num]=cv,cnt++;
        }
        if(cnt==targnum){
            numb++,cnt=0,cv++;
        }
        if(numb>=targ)return true;
    }
    return false;
}


void solve() {
    int n,k,hi=1;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        hi=max(hi,vc[i]);
    }
    hi=min(hi+1,200001);
    int lo=0,mid;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(helper(vc,k,mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
        if((lo+1)==hi){
            if(helper(vc,k,hi)){
                cout<<hi<<"\n";
                return;
            }
            else{
                cout<<lo<<"\n";
                return;
            }
        }
    }
    cout<<lo<<"\n";
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