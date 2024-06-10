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
#include<cmath>
typedef long long ll; // 使用 typedef 创建别名
using namespace std;
ll mod = 998244353;


void solve() {
    ll mav=0,miv=0,n,v,v1,v2,p1,p2,ap1=1,ap2=0;
    cin>>n;
    vector<ll>vc(n);
    vector<ll>vc1(n);
    vector<ll>vc2(n);
    for(int i=0;i<n;i++){
        cin>>v;
        vc[i]=v;
        p1=0,p2=0;
        v1 = max(max(v+mav,v+miv),max(abs(v+mav),abs(v+miv)));
        v2 = min(min(v+mav,v+miv),min(abs(v+mav),abs(v+miv)));
        if(v1==v+mav)p1+=ap1;
        if(v1==v+miv)p1+=ap2;
        if(v1==abs(v+mav))p1+=ap1;
        if(v1==abs(v+miv))p1+=ap2;
        if(v2==v+mav)p2+=ap1;
        if(v2==v+miv)p2+=ap2;
        if(v2==abs(v+mav))p2+=ap1;
        if(v2==abs(v+miv))p2+=ap2;
        if(v1==v2)p2=0;
        p1%=mod;
        p2%=mod;
        ap1=p1;
        ap2=p2;
        mav = v1;
        miv = v2;
        vc1[i]=v1;
        vc2[i]=v2;
    }
    cout<<p1<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}