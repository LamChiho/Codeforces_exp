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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v1(n,vector<ll>(m));
    vector<vector<ll>>v2(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v2[i][j];
        }
    }
    vector<vector<ll>>c1(m,vector<ll>(n));
    vector<vector<ll>>c2(m,vector<ll>(n));
    vector<vector<ll>>r1(n,vector<ll>(m));
    vector<vector<ll>>r2(n,vector<ll>(m));   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c1[j][i] = v1[i][j];
            r1[i][j] = v1[i][j];
            c2[j][i] = v2[i][j];
            r2[i][j] = v2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sort(r1[i].begin(),r1[i].end());
        sort(r2[i].begin(),r2[i].end());
    }
    sort(r1.begin(),r1.end());
    sort(r2.begin(),r2.end());
    for(int i=0;i<m;i++){
        sort(c1[i].begin(),c1[i].end());
        sort(c2[i].begin(),c2[i].end());
    }
    sort(c1.begin(),c1.end());
    sort(c2.begin(),c2.end());
    int tg=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(r1[i][j]!=r2[i][j])tg--;
            if(c1[j][i]!=c2[j][i])tg--;
        }
    }
    if(tg>0)cout<<"YES\n";
    else cout<<"NO\n";
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