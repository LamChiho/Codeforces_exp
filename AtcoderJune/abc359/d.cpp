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

bool helper(int num,int p1){
    int cr=1;
    p1/=2;
    //cout<<num<<"\n";
    while(cr<p1){
        //cout<<(num&cr)<<' '<<(num&p1)<<"a\n";
        if(((num&cr)==0)&&((num&p1)>0))return true;
        if(((num&p1)==0)&&((num&cr)>0))return true;
        cr*=2;
        p1/=2;
    }
    return false;
}

void solve() {
    int n,k,nn;
    cin>>n>>k;
    string s;
    cin>>s;
    int pow=1;
    for(int i=0;i<k;i++)pow*=2;
    vector<int>cr(pow,0);
    vector<bool>rec(pow);
    for(int i=0;i<pow;i++)rec[i]=helper(i,pow);
    //for(int i=0;i<pow;i++)cout<<rec[i]<<' ';
    //cout<<"\n";
    cr[0]++;
    vector<int>nr(pow,0);
    for(int i=0;i<(k-1);i++){
        if(s[i]=='A'){
            for(int j=0;j<pow;j++){
                if((j*2)<pow){
                    nr[j*2]+=cr[j];
                    nr[j*2]%=mod;
                }
            }
        }
        else if(s[i]=='B'){
            for(int j=0;j<pow;j++){
                if((j*2+1)<pow){
                    nr[j*2+1]+=cr[j];
                    nr[j*2+1]%=mod;
                }
            }
        }
        else{
            for(int j=0;j<pow;j++){
                if((j*2)<pow){
                    nr[j*2]+=cr[j];
                    nr[j*2]%=mod;
                }
                if((j*2+1)<pow){
                    nr[j*2+1]+=cr[j];
                    nr[j*2+1]%=mod;
                }
            }
        }
        for(int j=0;j<pow;j++){
            cr[j]=nr[j];
            nr[j]=0;
            //cout<<cr[j]<<' ';
        }
        //cout<<"\n";
    }
    for(int i=(k-1);i<n;i++){
        if(s[i]=='A'){
            for(int j=0;j<pow;j++){
                nn = j*2;
                if(nn&pow)nn^=pow;
                if(rec[nn]){
                    nr[nn]+=cr[j];
                    nr[nn]%=mod;
                }
            }
            
        }
        else if(s[i]=='B'){
            for(int j=0;j<pow;j++){
                nn = j*2+1;
                if(nn&pow)nn^=pow;
                if(rec[nn]){
                    nr[nn]+=cr[j];
                    nr[nn]%=mod;
                }
            }
        }
        else{
            for(int j=0;j<pow;j++){
                nn = j*2;
                if(nn&pow)nn^=pow;
                if(rec[nn]){
                    nr[nn]+=cr[j];
                    nr[nn]%=mod;
                }
                nn = j*2+1;
                if(nn&pow)nn^=pow;
                if(rec[nn]){
                    nr[nn]+=cr[j];
                    nr[nn]%=mod;
                }
            }
        }
        for(int j=0;j<pow;j++){
            cr[j]=nr[j];
            nr[j]=0;
            //cout<<cr[j]<<' ';
        }
        //cout<<"\n";
    }
    int cs=0;
    for(int j=0;j<pow;j++){
        cs+=cr[j];
        cs%=mod;
    }
    cout<<cs<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    solve();
}
