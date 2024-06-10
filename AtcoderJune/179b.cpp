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
    ll m,n;
    cin>>m>>n;
    vector<ll>vc(m,0);
    for(int i=0;i<m;i++)cin>>vc[i];
    vector<ll>rel(m,-1);
    for(int i=0;i<m;i++){
        vc[i]--;
        if(vc[i]!=i){
            rel[i]=vc[i];
        }
    }
    ll cur=1,nextN;
    vector<ll>tp(m,1);
    for(int i=0;i<m;i++){
        tp[i]=cur;
        cur*=2;
    }
    vector<ll>calc1(cur,0);
    calc1[cur-1]++;
    vector<ll>rec(cur,0);
    for(int i=0;i<n;i++){
        for(ll j=0;j<cur;j++){
            for(int k=0;k<m;k++){
                if(j&tp[k]){//下一步取用了k数字，接下来处理依赖关系
                    nextN = j;
                    if(rel[k]!=-1){
                        nextN^=tp[k];
                    }
                    for(int nn=0;nn<m;nn++){
                        if(rel[nn]==k)nextN|=tp[nn];
                    }
                    rec[nextN]+=calc1[j];
                    rec[nextN]%=mod;
                }
            }
        }
        for(int j=0;j<cur;j++){
            calc1[j]=rec[j];
            rec[j]=0;
        }
    }
    ll su=0;
    for(auto num:calc1){
        su+=num;
        su%=mod;
    }
    cout<<su<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
