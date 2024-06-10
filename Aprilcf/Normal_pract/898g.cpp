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
    string s;
    cin>>s;
    int n=(int)s.length(),lb=0,aml=n,as=0,mbl=0,cal=0;
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
        
        if(s[i]=='A'){
            lb=0;
            as++;
            cal++;
        }
        else{
            if(cal>0){
                aml=min(aml,cal);
            }
            cal=0;
            lb++;
            mbl=max(mbl,lb);
        }
        //cout<<lb<<endl;
    }
    if(cal>0){
        aml=min(aml,cal);
    }
    //cout<<cal<<' '<<mbl<<endl;
    if(s[0]=='B'){
        cout<<as<<"\n";
    }
    else if(s[n-1]=='B'){
        cout<<as<<"\n";
    }
    else if(mbl>1){
        cout<<as<<"\n";
    }
    else{
        cout<<as-aml<<"\n";
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