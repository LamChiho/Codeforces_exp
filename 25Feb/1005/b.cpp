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
    int n;
    cin>>n;
    vector<int>vc(n);
    vector<int>rec(n+1,0);
    for(int i=0;i<n;i++){cin>>vc[i];
    rec[vc[i]]++;}
    int a1=-1,a2=-1,tg=0,v1=-1,v2=-1;
    for(int i=0;i<n;i++){
        if(rec[vc[i]]==1){
            if(tg==0)a1=(i+1),a2=(i+1),tg=1;
            else a2++;
        }
        else{
            tg=0;
        }
        if((v2-v1)<=(a2-a1)){
            v2=a2,v1=a1;
        }
    }
    if(v1!=-1)cout<<v1<<' '<<v2<<"\n";
    else cout<<"0\n";
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