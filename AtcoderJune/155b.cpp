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
    int n1,n2;
    cin>>n1>>n2;
    vector<int>v1(n1,0);
    vector<int>v2(n2,0);
    for(int i=0;i<n1;i++)cin>>v1[i];
    for(int i=0;i<n2;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int p1=0,p2=0,lp=-1;
    while((p1<n1)&&(p2<n2)){
        if(v1[p1]<v2[p2]){
            if(lp==0){
                cout<<"Yes\n";
                return;
            }
            lp=0;
            p1++;
        }
        else{
            lp=1;
            p2++;
        }
    }
    if((p1+1)<n1){
        cout<<"Yes\n";
        return;
    }
    else if(p1<n1){
        if(lp==0){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
