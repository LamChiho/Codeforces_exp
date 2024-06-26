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

ll gcd_helper(ll n1,ll n2){
    ll n3;
    n3 = min(n1,n2);
    n1 = max(n1,n2);
    n2 = n3;
    while((n1%n2)!=0){
        n3 = n1%n2;
        n1 = n2;
        n2 = n3;
    }
    return n2;
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    ll su=0,onesin,sq = k*k,zerosin,cgcd=0,dif;
    vector<vector<int>>vc(n,vector<int>(m,0));
    vector<vector<int>>ones(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vc[i][j];
        }
    }
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='1'){
                su+=vc[i][j];
                ones[i+1][j+1]=1+ones[i+1][j];
            }
            else{
                su-=vc[i][j];
                ones[i+1][j+1]=ones[i+1][j];
            }
        }
        for(int j=0;j<m;j++)ones[i+1][j+1]+=ones[i][j+1];
    }
    for(int i=0;i<=n;i++){
        //for(auto num:ones[i])cout<<num<<' ';
        //cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i>=(k-1))&&(j>=(k-1))){
                onesin = ones[i+1][j+1]+ones[i+1-k][j+1-k]-ones[i+1-k][j+1]-ones[i+1][j+1-k];
                zerosin = sq-onesin;
                dif = abs(onesin-zerosin);
                //cout<<i<<' '<<j<<' '<<onesin<<' '<<zerosin<<' '<<cgcd<<"\n";
                if(dif!=0){
                    if(cgcd==0)cgcd=dif;
                    else cgcd = gcd_helper(dif,cgcd);
                }
            }
            //cout<<cgcd<<"cgcd\n";
        }
    }
    if(su<0)su=-su;
    if(su==0){
        cout<<"YES\n";
        return;
    }
    else if(cgcd==0){
        cout<<"NO\n";
        return;
    }
    else if((su%cgcd)==0){
        cout<<"YES\n";
        return;
    }
    else{
        cout<<"NO\n";
        return;
    }
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