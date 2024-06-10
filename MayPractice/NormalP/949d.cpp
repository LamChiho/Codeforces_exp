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
vector<int>primes;

void solve(){
    int n,cur=1;
    cin>>n;
    while(((cur*(cur+1))/2+(cur%2))<n)cur++;
    
}
 
 
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    ll cc;
    vector<ll>rec(300000,1);
    primes.push_back(1);
    for(int i=2;i<300000;i++){
        primes.push_back(i);
        if(rec[i]>0){
            cc = 300000/i;
            for(int j=2;j<=cc;j++){
                rec[j*i]=0;
            }
        }
    }
    cin>>t;
    while(t--){
        solve();
    }
}