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
    ll n,cans=0,lb,rb,calc,pss;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    sort(vc.begin(),vc.end());
    vector<ll>recorder(2000001,0);
    for(auto num:vc)recorder[num]++;
    for(int i=1;i<=1000000;i++){
        if(recorder[i]>1){
            cans+=(recorder[i]-1);
        }
        recorder[i]+=recorder[i-1];
    }
    for(int i=0;i<n;i++){
        lb=vc[i]+1;
        while(lb<=1000000){
            calc = lb/vc[i];
            calc++;
            calc*=vc[i];
            rb = calc-1;
            if(rb>1000000)rb = 1000000;
            //cout<<vc[i]<<' '<<lb<<' '<<rb<<"\n";
            cans+=((recorder[rb]-recorder[lb-1])*(lb/vc[i]));
            lb = rb+1;
        }
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
