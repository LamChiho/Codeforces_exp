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

ll gcd(ll n1,ll n2){
    ll n3 = max(n1,n2);
    n2 = min(n1,n2);
    n1 = n3;
    while((n1%n2)!=0){
        n3 = n1%n2;
        n1 = n2;
        n2 = n3;
    }
    return n2;
}

ll generate_LCM(vector<ll>&vc1,vector<ll>&vc2,vector<ll>&vc,int curp,int lcm){
    ll curLCM,size=vc1.size(),cans=0,cl,cLCM;
    cLCM = lcm;
    vector<ll>ret(size,0);
    for(int i=0;i<=vc2[curp];i++){
        if((curp+1)<(vc1.size())){
            if(i>0){
                cLCM*=vc1[curp];
            }
            cans = max(cans,generate_LCM(vc1,vc2,vc,curp+1,cLCM));
        }
        else{
            if(i>0)lcm*=vc1[curp];
            bool exist = false;
            for(int j=0;j<(vc.size());j++){
                if(vc[j]==lcm)exist=true;
            }
            if(exist) ;
            else{
                ll curn=1;
                cl = 0;
                for(int j=0;j<(vc.size());j++){
                    if((lcm%vc[j])==0){
                        cl++;
                        curn *= (vc[j]/gcd(curn,vc[j]));
                    }
                }
                
                if(curn==lcm){
                    cans = max(cans,cl);
                }
            }
        }
    }
    //cout<<cans<<' '<<lcm<<"\n";
    return cans;
}
void solve(){
    ll n,calcn;
    cin>>n;
    vector<ll>vc(n);
    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    if(n==1){
        cout<<"0\n";
        return;
    }
    sort(vc.begin(),vc.end());
    bool trig=true;
    for(int i=0;i<(n-1);i++){
        if((vc[n-1]%vc[i])!=0)trig=false;
    }
    if(trig==false){
        cout<<n<<"\n";
        return;
    }
    ll cur=2,cp=1;
    calcn=vc[n-1];
    vector<ll>v1;
    v1.push_back(1);
    vector<ll>v2;
    v2.push_back(0);
    while((cur*cur)<=calcn){
        if((calcn%cur)==0){
            v2.push_back(0);
            v1.push_back(cur);
            while((calcn%cur)==0){
                calcn/=cur;
                v2[cp]++;
            }
            cp++;
        }
        cur++;
    }
    if(calcn>1){
        v1.push_back(calcn);
        v2.push_back(1);
    }
    calcn = generate_LCM(v1,v2,vc,1,1);
    cout<<calcn<<"\n";
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