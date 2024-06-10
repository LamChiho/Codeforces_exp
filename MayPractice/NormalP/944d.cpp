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
    int n,ln,mix=0,cp=1;
    string s;
    cin>>s;
    n = s.length();
    if(s[0]=='0'){
        ln=0;
    }
    else{
        ln=1;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            if(ln==1){
                cp++;
                ln=0;
            }
        }
        else{
            if(ln==0){
                if(mix==0){
                    mix++;
                    ln=1;
                }
                else{
                    cp++;
                    ln=1;
                }
            }
        }
        //cout<<cp<<' '<<ln<<endl;
    }
    //cout<<"a\n";
    cout<<cp<<"\n";
}
int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}