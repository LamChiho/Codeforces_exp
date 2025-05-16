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

bool helper(vector<int>&v1,vector<int>&v2,int skipped,int n,int m){
    int p1=0,p2=0;
    if(v2[0]<=skipped)p2++;
    for(int i=0;i<n;i++){
        if(v1[i]>=v2[p1]){
            p1++;
        }
        if(v1[i]>=v2[p2]){
            p2++;
        }
        if(skipped>=v2[p1]&&p1<m)p2=max(p2,p1+1);
        if(p1>=m||p2>=m)return true;
    }
    return false;
}


void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    int hi=1000000000,lo=0,mid;
    if(!helper(v1,v2,hi,n,m)){
        cout<<"-1\n";
        return;
    }
    while(hi>lo){
        mid=(hi+lo);
        mid/=2;
        if(helper(v1,v2,mid,n,m))hi=mid;
        else lo=mid+1;
        if((lo+1)==hi){
            if(helper(v1,v2,lo,n,m)){
                cout<<lo<<"\n";
            }
            else cout<<hi<<"\n";
            return;
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