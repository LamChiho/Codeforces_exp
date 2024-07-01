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
    int n;
    cin>>n;
    vector<int>vc(n);
    vector<int>rec(n+1,0);
    for(int i=0;i<n;i++){cin>>vc[i];
    rec[vc[i]]++;}
    int s=0,x=0,cuse=0,cp=0,altuse,tg;
    //for(auto num:rec)cout<<num<<' ';
    //cout<<"\n";
    while(cp<=n){
        if(rec[cp]>0){
            if(cuse>=rec[cp]){
                altuse=cuse-rec[cp],tg=1;//已经减去了这个的测试，如果接下来所有的小于本次的都可以去除，那么就减去
                for(int i=cp+1;i<=n;i++){
                    if(rec[i]>0){
                        if((rec[i]<rec[cp])&&(altuse<rec[i])){
                            tg=0;
                            break;
                        }
                        else if(rec[i]<rec[cp]){
                            altuse-=rec[i];
                        }
                        else{
                            altuse++;
                        }
                    }
                }
                if(tg==1)cuse-=rec[cp];
                else{
                    x++;
                    cuse++;
                }
            }
            else{
                cuse++;
                s+=cp;
                x++;
            }
        }
        //cout<<cp<<' '<<s<<' '<<x<<' '<<cuse<<"\n";
        cp++;
    }
    cout<<x<<"\n";
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
