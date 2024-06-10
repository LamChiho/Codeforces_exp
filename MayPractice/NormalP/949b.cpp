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

bool checker(ll lfn,ll rtn, ll cr){
    if(cr>rtn){
        return false;
    }
    else if((lfn<=cr)&&(rtn>=cr)){
        return true;
    }
    else{
        ll calcn = rtn,cr2=cr;
        cr2*=2;
        calcn/=cr;
        calcn*=cr;
        if(calcn>=lfn)return true;
        calcn = lfn;
        calcn%=cr2;
        if(calcn>=cr)return true;
    }
    return false;
}
void solve(){
    ll n,m,lf,rt,cans,cur=1;
    cin>>n>>m;
    cans=n;
    lf = n-m;
    rt = n+m;
    if(lf<0){
        lf=0;
    }
    while(cur<=rt){
        if((cur&rt)>0){
            cans|=cur;
        }
        if((cur&lf)>0){
            cans|=cur;
        }
        if((rt-lf+1)>cur){
            cans|=cur;
        }
        cur*=2;
    }
    /*
    ll comp=lf;
    for(ll i=lf+1;i<=rt;i++){
        comp|=i;
    }
    if(comp!=cans){
        cout<<"NO\n";
    }
    else{
        cout<<"Yes\n";
    }*/
    cout<<cans<<"\n";
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