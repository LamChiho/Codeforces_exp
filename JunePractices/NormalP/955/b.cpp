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
    ll x,k,y,nn,cr=0;
    cin>>x>>y>>k;
    while(k>0){
        //cout<<x<<' '<<k<<' ';
        //cout<<y;
        //cout<<"\n";
        //if(cr>10)break;
        //cr++;
        nn = x/y;
        nn++;
        nn*=y;
        if((nn-x)<=k){
            k-=(nn-x);
            while((nn%y)==0){
                nn/=y;
            }
            x = nn;
        }
        else{
            x+=k;
            cout<<x<<"\n";
            return;
        }
        if(x==1){
            k%=(y-1);
            x+=k;
            cout<<x<<"\n";
            return;
        }
    }
    cout<<x<<"\n";
    return;
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
