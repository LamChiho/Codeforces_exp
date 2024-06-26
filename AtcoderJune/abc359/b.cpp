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
    int n,n1=-1,n2=-1,n3=-1,cnt=0;
    cin>>n;
    n*=2;
    for(int i=0;i<n;i++){
        cin>>n1;
        if(n1==n3)cnt++;
        n3=n2;
        n2=n1;
    }
    cout<<cnt<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
