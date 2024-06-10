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
    string s1,s2,r1="",r2="";
    cin>>s1>>s2;
    ll n = s1.length(),comp=0,n1,n2;
    for(ll i=0;i<n;i++){
        n1 = s1[i]-'0',n2=s2[i]-'0';
        if(comp==0){
            if(n1>n2){
                comp=1;
                r1+=s1[i];
                r2+=s2[i];
            }
            else if(n1<n2){
                comp=-1;
                r1+=s1[i];
                r2+=s2[i];
            }
            else{
                r1+=s1[i];
                r2+=s2[i];
            }
        }
        else if(comp==1){
            if(n1<n2){
                r1+=s1[i];
                r2+=s2[i];
            }
            else{
                r1+=s2[i];
                r2+=s1[i];
            }
        }
        else{
            if(n1<n2){
                r1+=s2[i];
                r2+=s1[i];
            }
            else{
                r1+=s1[i];
                r2+=s2[i];
            }
        }
    }
    cout<<r1<<"\n";
    cout<<r2<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
