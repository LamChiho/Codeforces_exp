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
    ll n,r,c;
    cin>>n>>r>>c;
    string s;
    cin>>s;
    set<pair<ll,ll>>seen;
    ll cr=0,cc=0,v1,v2,ccv;
    ll cv;
    seen.insert(make_pair(0LL,0LL));
    for(int i=0;i<n;i++){
        if(s[i]=='N')cr--;
        else if(s[i]=='S')cr++;
        else if(s[i]=='W')cc--;
        else cc++;
        //cout<<cr<<' '<<cc<<"\n";
        cv=0LL+cc*(n+0LL)+cr;
        v1=(cr-r),v2=(cc-c);
        if(seen.find(make_pair(v1,v2))!=seen.end())cout<<'1';
        else cout<<'0';
        seen.insert(make_pair(cr,cc));
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}