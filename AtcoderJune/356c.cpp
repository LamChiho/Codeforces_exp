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

void solve() {
    int n,m,k,l1,iptn,rng=1,cans=0,cur,ck;
    cin>>n>>m>>k;
    vector<vector<int>>vc(m,vector<int>());
    char c;
    vector<int>tp(15);
    for(int i=0;i<n;i++){
        tp[i]=rng;
        rng*=2;
        }
    vector<int>rec(m);
    for(int i=0;i<m;i++){
        cin>>l1;
        for(int j=0;j<l1;j++){
            cin>>iptn;
            iptn--;
            vc[i].push_back(iptn);
        }
        cin>>c;
        if(c=='o'){
            rec[i]=1;
        }
        else{
            rec[i]=0;
        }
    }
    for(int i=0;i<rng;i++){
        cur=1;
        for(int j=0;j<m;j++){
            ck=0;
            for(int le=0;le<vc[j].size();le++){
                if(tp[vc[j][le]]&i)ck++;
            }
            if(ck>=k){
                if(rec[j]==0)cur=0;
            }
            else{
                if(rec[j]==1)cur=0;
            }
        }
        cans+=cur;
        //cout<<ck<<' '<<i<<"\n";
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
