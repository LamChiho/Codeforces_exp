
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
vector<ll>par(200001,-1);
vector<ll>col(200001,-1);
vector<vector<ll>>vc(200001,vector<ll>());
vector<ll>counter(4,0);

void par_decider(ll rot,ll cp){
    par[rot]=cp;
    for(ll num:vc[rot]){
        if(num!=cp)par_decider(num,rot);
    }
}
void init_counter(){
    for(int i=0;i<4;i++){
        
    }
}
void solve(){
    ll n,q,a,b;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>col[i];
        while(vc[i].size()>0){
            vc[i].pop_back();
        }
    }
    for(int i=1;i<n;i++){
        cin>>a>>b;
        a--;
        b--;
        vc[a].push_back(b);
        vc[b].push_back(a);
    }
    par_decider(0,-1);
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