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
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==y1){
        cout<<"NO\n";
        return;
    }
    else if(x2==y2){
        cout<<"NO\n";
        return;
    }
    else if(x1<y1){
        if(x2<y2){
            cout<<"YES\n";
            return;
        }
    }
    else{
        if(x2>y2){
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
