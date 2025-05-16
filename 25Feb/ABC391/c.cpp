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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,q;
    cin>>n>>q;
    vector<int>rec(n+1,1);
    vector<int>atnest(n+1,1);
    for(int i=0;i<=n;i++)atnest[i]=i;
    int cans=0;
    rec[0]=0;
    int c1,c2,c3;
    for(int i=0;i<q;i++){
        cin>>c1;
        if(c1==1){
            cin>>c2>>c3;
            rec[atnest[c2]]--;
            if(rec[atnest[c2]]==1)cans--;
            atnest[c2]=c3;
            rec[atnest[c2]]++;
            if(rec[atnest[c2]]==2)cans++;
        }
        else cout<<cans<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}