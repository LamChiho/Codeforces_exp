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
    ll n,rec=0,cur=1;
    cin>>n;
    vector<int>vc(31,0);
    for(int i=0;i<31;i++){
        if((n&cur)>0){
            vc[i]++;
            rec=i+1;
            if(i>0){
                if(vc[i-1]>0){
                    vc[i-1]=-1;
                    vc[i+1]++;
                    vc[i]--;
                }
                else if(vc[i]>1){
                    vc[i]=0;
                    vc[i+1]++;
                }
            }
        }
        cur*=2;
    }
    cout<<31<<"\n";
    for(int i=0;i<31;i++){
        cout<<vc[i]<<' ';
    }
    cout<<"\n";
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