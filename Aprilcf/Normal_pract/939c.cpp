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


ll mod=998244353;

void solve() {
    ll s,n,cc,cp=1;
    cin>>n;
    s=0;
    for(int i=1;i<=n;i++){
        cc = i;
        cc*=2;
        cc--;
        cc*=i;
        s+=cc;
    }
    cc = 2*n;
    cc--;
    cout<<s<<' '<<cc<<"\n";
    for(int i=0;i<cc;i+=2){
        if(i==0){
            cout<<1<<' '<<n<<' ';
            for(int j=1;j<=n;j++){
                cout<<j<<' ';
            }
            cout<<"\n";
        }
        else{
            cout<<1<<' '<<(n-cp)<<' ';
            for(int j=1;j<=n;j++){
                cout<<j<<' ';
            }
            cout<<"\n";
            cout<<2<<' '<<(n-cp)<<' ';
            for(int j=1;j<=n;j++){
                cout<<j<<' ';
            }
            cout<<"\n";
            cp++;
        }
    }
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