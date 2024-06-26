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
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>vc(n);
    vector<ll>vs(n+1,0);
    vector<int>rec(n+1,0);
    int lp=0;
    ll cs=0;
    for(int i=0;i<n;i++){
        cin>>vc[i];
        vs[i+1]=vs[i]+vc[i];
    }
    for(int i=1;i<=n;i++){
        if(vc[i-1]>r){
            rec[i]=rec[i-1];
            lp=i;
        }
        else{
            while(vs[i]-vs[lp]>r)lp++;
            while(((vs[i]-vs[lp])>=l)&&((vs[i]-vs[lp])<=r)){
                rec[i] = max(rec[i],rec[lp]+1);
                lp++;
            }
            lp--;
            if(lp<0)lp++;
        }
        rec[i]=max(rec[i],rec[i-1]);
        //cout<<rec[i]<<' ';
    }
    //cout<<"\n";
    cout<<rec[n]<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}
