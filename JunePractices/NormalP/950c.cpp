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

ll gcd(ll n1,ll n2){
    ll n3 = min(n1,n2);
    n1 = max(n1,n2);
    n2 = n3;
    while((n1%n2)>0){
        n3 = n1%n2;
        n1 = n2;
        n2 = n3;
    }
    return n2;
}

void solve() {
    ll n,calc,nd=1,fp=-1,lp,ln,atp=4;
    cin>>n;
    vector<ll>vc(n);
    vector<ll>v1(n-1);
    for(int i=0;i<n;i++)cin>>vc[i];
    for(int i=1;i<n;i++){
        calc = gcd(vc[i],vc[i-1]);
        v1[i-1]=calc;
        if(i>1){
            if(v1[i-1]<v1[i-2]){
                if(nd==1){
                    nd--;
                    fp=i-1;
                }
            }
        }
    }
    if(nd==1){cout<<"YES\n";
    return;}
    for(int change=-2;change<3;change++){
        nd = 1,ln=-1,lp=-1;
        for(int i=0;i<n;i++){
            if(i!=fp+change){
                if(lp>=0){
                    calc = gcd(vc[i],ln);
                    v1[lp]=calc;
                }
                ln = vc[i];
                lp++;
                if(lp>1){
                    if(v1[lp-1]<v1[lp-2])nd--;
                }
            }
        }
        if(nd>0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;


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