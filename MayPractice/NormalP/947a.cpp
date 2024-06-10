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
    ll n,cl=1,lst=-1,curn;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>curn;
        vc[i]=curn;
        if(curn<lst){
            lst = curn;
            cl++;
        }
        else{
            lst = curn;
        }
    }
    if(cl>2){
        cout<<"No\n";
    }
    else if(cl==2){
        if(vc[n-1]<=vc[0]){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        cout<<"Yes\n";
    }
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