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
    ll n,m,cur=1,mul=2,n1,n2,cans=0;
    cin>>n>>m;
    for(int i=0;i<60;i++){
        if((m&cur)>0){
            n1 = n/mul;
            n1*=cur;
            n1%=mod;
            cans+=n1;
            cans%=mod;
            n1 = n%mul;
            if(n1>=cur){
                n2=(n1+1-cur);
                n2%=mod;
                cans+=n2;
            }
            cans%=mod;
        }
        cur*=2;
        mul*=2;
        //cout<<cans<<"\n";
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
