
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



void traveler1(vector<vector<ll>> &tree, ll root){
    for(ll pt:tree[root]){
        if(pt!=par[root]){
            par[pt]=root;
            traveler1(tree,pt);
        }
    }
}

vector<ll> traveler2(vector<vector<ll>> &tree, ll root,ll pa){
    vector<ll>vc(2);
    ll ans1=0,mv=0,child=0;
    for(ll pt:tree[root]){
        if(pt!=pa){
            child++;
            vc = traveler2(tree,pt,root);
            ans1+=vc[0];
            mv = max(mv,vc[1]);
        }
    }
    vc[0]=ans1+(child*2);
    if(child>0)mv++;
    vc[1]=mv;
    return vc;
}


void solve(){
    ll n,n1,n2,a,b,t1,t2,time;
    cin>>n;
    vector<vector<ll>>vc(n,vector<ll>());
    vector<ll>v1;
    cin>>a>>b;
    a--;
    b--;
    par[0]=-1;
    for(int i=1;i<n;i++){
        cin>>n1>>n2;
        par[i]=-1;
        vc[n1-1].push_back(n2-1);
        vc[n2-1].push_back(n1-1);
    }
    traveler1(vc,b);
    ll curp=a,curt=0;
    while(curp!=b){
        curt++;
        curp = par[curp];
    }
    t1 = (curt+1)/2,curp=a;
    for(int i=0;i<(curt-(curt+1)/2);i++){
        curp=par[curp];
    }
    //cout<<curp<<"\n";
    v1 = traveler2(vc,curp,-1);
    t2 = v1[0]-v1[1];
    //cout<<t1<<' '<<t2<<' '<<v1[0]<<' '<<v1[1]<<"abcde\n";
    cout<<t1+t2<<"\n";
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