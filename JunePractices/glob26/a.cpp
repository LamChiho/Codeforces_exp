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
    int n,ln=-1,p=-1,pan=-1;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++){cin>>vc[i];
    if(ln==-1)ln=vc[i];
    else if(ln!=vc[i]) p=i;}
    if(p==-1){
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            if((i!=0)&&(i!=p)&&(pan==-1)){
                cout<<"R";
                pan++;
            }
            else{
                cout<<"B";
            }
        }
        cout<<"\n";
        return;
    }

}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}
