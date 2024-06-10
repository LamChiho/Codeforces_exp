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

ll cans=0;

void dfs(vector<string>&svc,vector<int>&vc,int curp){
    vector<vector<int>>rec(26,vector<int>());
    ll cc,n1,n2;
    for(int i=0;i<vc.size();i++){
        if(curp!=svc[vc[i]].length()){
            rec[svc[vc[i]][curp]-'a'].push_back(vc[i]);
        }
    }
    for(int i=0;i<26;i++){
        if(rec[i].size()>1){
            n1 = rec[i].size(),n2 = rec[i].size();
            n2--;
            cc = (n1*n2);
            cc/=2;
            cans+=cc;
            dfs(svc,rec[i],curp+1);
        }
    }
}

void solve() {
    int n;
    cin>>n;
    string s;
    vector<int>cvc(n,0);
    vector<string>vs(n,"");
    for(int i=0;i<n;i++){
    cin>>vs[i];
    cvc[i]=i;
    }
    dfs(vs,cvc,0);
    cout<<cans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
