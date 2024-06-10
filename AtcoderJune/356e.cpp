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
    ll n,cans=0,lb,rb,calc,pss,c2,mxn=0,lrec,crec,n1,n2,r1;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){cin>>vc[i];
    mxn = max(mxn,vc[i]);}
    sort(vc.begin(),vc.end());
    vector<ll>recorder(mxn+1,0);
    for(auto num:vc)recorder[num]++;
    for(int i=1;i<=mxn;i++){
        if(recorder[i]>1){
            n1 = recorder[i];
            n2 = recorder[i]-1;
            n1*=n2;
            n1/=2;
            cans+=n1;
        }
        recorder[i]+=recorder[i-1];
    }
    for(int i=0;i<n;i++){
        r1 = cans;
        if((i>0)&&(vc[i]==vc[i-1])){
            cans+=(crec-lrec);
        }
        else{
            lb=vc[i]+1,rb = 2*vc[i]-1,c2=1;
            //cout<<vc[i]<<"aa\n";
            while(lb<=mxn){
                //cout<<lb<<' '<<rb<<"\n";
                if(rb>mxn)rb=mxn;
                if(lb<=rb){
                    cans+=(c2*(recorder[rb]-recorder[lb-1]));
                }
                c2++;
                if(c2==2){
                    lb--;
                }
                lb+=vc[i];
                rb+=vc[i];
                if(rb>mxn)rb=mxn;
            }
        }
        lrec = r1;
        crec = cans;
    }
    cout<<cans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
