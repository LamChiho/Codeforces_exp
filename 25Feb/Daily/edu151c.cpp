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

constexpr ll mo=998244353;

int tg=0;


void solve() {
    string s,l,r;
    int n;
    cin>>s>>n>>l>>r;
    int begpos=0,nextpos=-1;
    for(int i=0;i<n;i++){
        for(int v=l[i]-'0';v<=r[i]-'0';v++){
            tg=0;
            for(int j=begpos;j<s.length();j++){
                if(s[j]==('0'+v)){
                    nextpos=max(nextpos,j);
                    tg++;
                    break;
                }
            }
            if(tg==0){
                cout<<"YES\n";
                return;
            }
        }
        //cout<<begpos<<' '<<nextpos<<"\n";
        if(nextpos==-1){
            cout<<"YES\n";
            return;
        }
        else begpos=nextpos+1;
        //cout<<begpos<<"\n";
        nextpos=-1;
    }
    cout<<"NO\n";
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