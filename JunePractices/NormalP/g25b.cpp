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
    int n,k,cl=0,cans=0,cmx=0,lv=0,rv=0,fp=0,exc,excp;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    for(int i=0;i<n;i++){
        if(vc[i]>vc[k-1]){
            fp=i;
            break;
        }
    }
    vector<int>vp = {0,1,fp,k-1};
    for(int j=0;j<4;j++){
        excp = vp[j];
        exc = vc[k-1];
        vc[k-1] = vc[excp];
        vc[excp]=exc;
        cmx=0;
        //cout<<exc<<' '<<excp<<endl;
        for(int i=0;i<n;i++){
            if(vc[i]>vc[excp]){break;}
            else if(vc[i]<vc[excp]){
                //cout<<i<<' '<<vc[excp]<<' '<<vc[i]<<endl;
                if(i>excp){cmx++;}
                else {cmx=1;}
            }
        }
        //cout<<cmx<<endl;
        cans = max(cans,cmx);
        exc = vc[k-1];
        vc[k-1] = vc[excp];
        vc[excp]=exc;
    }
    cout<<cans<<"\n";
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
