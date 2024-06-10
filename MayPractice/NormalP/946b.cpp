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
    int n;
    string s;
    cin>>n>>s;
    vector<char>vc;
    unordered_map<char,int>um1;
    for(int i=0;i<n;i++){
        if(um1.find(s[i])==um1.end()){
            um1[s[i]]=1;
            vc.push_back(s[i]);
        }
    }
    sort(vc.begin(),vc.end());
    for(int i=0;i<vc.size();i++){
        um1[vc[i]]=i;
    }
    string ret="";
    for(int i=0;i<n;i++){
        ret+=vc[(int)vc.size()-um1[s[i]]-1];
    }
    cout<<ret<<"\n";
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