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

ll mod=998244353,ptcp=0,tm=0;
vector<int>pt(1000000);
vector<int>recorder(19);
// True values will be changed to what we want, so all we need to care is if the values are all zero
void mexhelper(int lf,int rt,vector<ll>&vc){
    int cp=0;
    for(int i=0;i<19;i++){
        recorder[i]=0;
    }
    for(int i=lf;i<=rt;i++){
        if(vc[i]<19){
            recorder[vc[i]]++;
        }
        while(recorder[cp]>0){
            cp++;
        }
    }
    for(int i=lf;i<=rt;i++){
        vc[i]=cp;
    }
    pt[ptcp]=lf;
    ptcp++;
    pt[ptcp]=rt;
    ptcp++;
    tm++;
}

void f1(int lf,int rt,vector<ll>&vc,int trig){//trig==0,return n,otherwise, 0~n-1
    if(lf==rt){
        if(vc[lf]==0){
            if(trig==0){
                mexhelper(lf,rt,vc);
            }
        }
        else{
            if(trig>0){
                mexhelper(lf,rt,vc);

            }
            else{
                mexhelper(lf,rt,vc);
                mexhelper(lf,rt,vc);
            }
        }
    }
    else{
        f1(lf,rt-1,vc,0);
        f1(lf+1,rt,vc,1);
        if(trig==0){
            mexhelper(lf,rt,vc);
        }        
    }
}
void solve() {
    ptcp=0,tm=0;
    ll n,calcv,calccv1;
    cin>>n;
    vector<ll>vc(n+1,0);
    vector<ll>curs(n+1,0);
    vector<ll>rec(n+1,0);
    for(int i=0;i<n;i++){
        cin>>vc[i+1];
        curs[i+1] = vc[i+1]+curs[i];
    }
    for(int i=1;i<=n;i++){
        calcv=0;
        curs[i] = vc[i]+curs[i-1];
        for(int j=1;j<=i;j++){
            calcv = j*j+curs[i-j];
            if(calcv>curs[i]){
                rec[i]=j;
                curs[i]=calcv;
            }
            //cout<<i<<' '<<j*j<<endl;
        }
        for(int j=1;j<rec[i];j++){
            rec[i-j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        if(rec[i]>0){
            f1(i-rec[i]+1,i,vc,0);
        }
    }
    cout<<curs[n]<<' '<<tm<<"\n";
    for(int i=0;i<tm;i++){
        cout<<pt[i*2]<<' '<<pt[i*2+1]<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}