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
    int n,m,iptn,tg=0;
    cin>>n>>m;
    vector<int>vc(m);
    for(int i=0;i<m;i++)cin>>vc[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>iptn;
            vc[j]-=iptn;
        }
    }
    for(int i=0;i<m;i++){
        if(vc[i]>0)tg++;
    }
    if(tg>0)cout<<"No\n";
    else{
        cout<<"Yes\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
