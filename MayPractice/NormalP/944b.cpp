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

int mod=998244353;
void solve(){
    string s,ret="";
    int n,rc=0;
    cin>>s;
    n = s.length();
    int cp=0;
    while(cp<n){
        if((cp+1)==n){
            ret+=s[cp];
            cp++;
        }
        else if(s[cp]!=s[cp+1]){
            rc++;
            ret+=s[cp+1];
            ret+=s[cp];
            cp+=2;
        }
        else{
            ret+=s[cp];
            cp++;
        }
    }
    if(rc>0){
        cout<<"YES\n";
        cout<<ret<<"\n";
    }
    else{
        cout<<"NO\n";
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