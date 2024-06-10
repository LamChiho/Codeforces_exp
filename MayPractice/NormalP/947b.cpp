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
typedef long long ll; // 使用 typedef 创建别名
void solve(){
    ll n,iptn;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    sort(vc.begin(),vc.end());
    ll n1=vc[0],n2=-1;
    for(int i=1;i<n;i++){
        if((vc[i]%n1)!=0){
            if(n2==-1){
                n2=vc[i];
            }
            else if((vc[i]%n2)!=0){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}


int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}