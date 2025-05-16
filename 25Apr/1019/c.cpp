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
    int n1=0,l1=0,t1=0,n2=0,l2=0;
    vector<int>v1(n,0);
    vector<int>v2(n,0);
    for(int i=0;i<(n-1);i++){
        if(t1==0){
            if(vc[i]<=k)n1--;
            else n1++;
            if(n1<=0){
                t1=1;
            }
        }
        else{
            if(vc[i]<=k){n2--;l2++;if(n2<=0){cout<<"Yes\n";return;}}
            else{
                if(l2==0&&n1<0){
                    n1++;
                    l2=0;
                }
                else{
                    n2++;
                    l2++;
                }
            }
        }
        v1[i]=t1;
    }
    n1=0,l1=0,t1=0,n2=0,l2=0;
    for(int i=n-1;i>0;i--){
        if(t1==0){
            if(vc[i]<=k)n1--;
            else n1++;
            if(n1<=0){
                t1=1;
            }
        }
        else{
            if(vc[i]<=k){n2--;l2++;if(n2<=0){cout<<"Yes\n";return;}}
            else{
                if(l2==0&&n1<0){
                    n1++;
                    l2=0;
                }
                else{
                    n2++;
                    l2++;
                }
            }
        }
        v2[i]=t1;
    }
    for(int i=0;i<(n-2);i++){
        if(v1[i]&&v2[i+2]){cout<<"Yes\n";return;}
    }
    cout<<"No\n";
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