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
int binary_helper(ll radious,ll x){
    ll lw=0,hi=radious,mid,calc,cv=radious*radious;
    while(lw<hi){
        mid = (lw+hi);
        mid/=2;
        calc = mid*mid+x*x;
        if(calc>=cv){
            hi = mid-1;
        }
        else{
            lw = mid;
        }
        if((lw+1)==hi){
            calc = hi*hi+x*x;
            if(calc>=cv){
                return lw;
            }
            return hi;
        }
    }
    return lw;
}
void solve() {
    ll r,cans=2,cn;
    cin>>r;
    r++;
    for(ll i=0;i<=r;i++){
        cn = binary_helper(r,i);
        if(i==0){
            cans+=(2*cn);
        }
        else{
            cans+=(4*cn);
        }
    }
    r--;
    for(ll i=0;i<=r;i++){
        cn = binary_helper(r,i);
        if(i==0){
            cans-=(2*cn);
        }
        else{
            cans-=(4*cn);
        }
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
