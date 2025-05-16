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
typedef long long ll; 

constexpr ll mod=998244353;

ll cur;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int lr=0,rl=0,involved;
    vector<ll>rec1(n+1,0);
    vector<ll>rec2(n+1,0);
    ll pt,ls=0,rs=0;
    for(int i=(n-1);i>-1;i--){
        if(s[i]=='<'){rl++;
        ls+=(0LL+i);
        rec2[rl]=ls;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            rl--;
            ls-=(0LL+i);
            if(lr>rl){//r side
                rl++;
                ls+=(0LL+i);
                pt=(n-i+0LL);
                involved=min(lr,rl);
                pt-=2*(rs-rec1[lr-involved]-(ls-rec2[rl-involved]));
                rl--;
                ls-=(0LL+i);
            }
            else{//l side
                pt=(i+1LL);
                involved=min(lr,rl);
                pt-=2*(rs-rec1[lr-involved]-(ls-rec2[rl-involved]));
            }
        }
        else{
            if(rl>lr){//r side
                lr++;
                rs+=(i+0LL);
                rec1[lr]=rs;
                pt=(i+1LL);
                involved=min(lr,rl);
                pt-=2*(rs-rec1[lr-involved]-(ls-rec2[rl-involved]));
            }
            else{//l side
                pt=(n-i+0LL);
                involved=min(lr,rl);
                pt-=2*(rs-rec1[lr-involved]-(ls-rec2[rl-involved]));
                lr++;
                rs+=(i+0LL);
                rec1[lr]=rs;
            }
        }
        cout<<pt<<' ';
    }
    cout<<"\n";
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