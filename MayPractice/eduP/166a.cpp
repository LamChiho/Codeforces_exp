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



void solve(){
    int num,n1=0,n2=0;
    cin>>num;
    string s,s1="",s2="";
    cin>>s;
    bool trig = true;
    for(int i=0;i<num;i++){
        if((s[i]<='9')&&(s[i]>='0')){
            if(i>0){
                if((s[i-1]>'9')||(s[i-1]<'0')){
                    cout<<"NO\n";
                    return;
                }
                if(s[i]<s[i-1]){
                    trig=false;
                }
            }
        }
        else{
            if(i>0){
                if((s[i-1]>'9')||(s[i-1]<'0')){
                    if(s[i]<s[i-1]){
                        trig=false;
                    }
                }
            }
        }
    }
    if(trig){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
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