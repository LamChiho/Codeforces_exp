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
typedef long long ll; // 使用 typedef 创建别名
vector<ll>record(300001,0);
vector<vector<ll>>vs(11,vector<ll>(300001,0));
void solve(){
    ll n,k,mxdis,miv,calcv;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>record[i];
        for(int j=0;j<=k;j++){
            mxdis = min(j+1,i);
            miv = record[i];
            calcv = record[i]+vs[j][i-1];
            for(int l=0;l<mxdis;l++){
                calcv = min(calcv,vs[j-l][i-l-1]+miv*(l+1));
                miv = min(miv,record[i-l-1]);
            }
            vs[j][i]=calcv;
            if(j>0){
                vs[j][i] = min(vs[j][i],vs[j-1][i]);
            }
        }
    }/*
    for(int j=0;j<=k;j++){
        for(int i=0;i<=n;i++){
            cout<<vs[j][i]<<' ';
        }
        cout<<"\n";

    }*/
    cout<<vs[k][n]<<"\n";
}


int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}