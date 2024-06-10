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
    int n,m;
    cin>>n>>m;
    vector<long long>va(n+m+1);
    vector<long long>vb(n+m+1);
    for(int i=0;i<(n+m+1);i++)cin>>va[i];
    for(int i=0;i<(n+m+1);i++)cin>>vb[i];
    long long tav=0,ba=0,tbv=0,auv,buv,bd=1,bb=0;
    for(int i=0;i<(n+m+1);i++){
        if(va[i]>vb[i])ba++;
        else bb++;
    }
    if(ba>n)bd=0;
    unordered_set<int>us;
    ba=0,bb=0;
    vector<long long>rec(n+m+1);
    if(bd==0){
        for(int i=0;i<(n+m+1);i++){
            if(va[i]>vb[i]){
                if(ba<n){
                    us.insert(i);
                    tav+=va[i];
                    ba++;
                }
                else if(ba==n){
                    auv=va[i];
                    buv=vb[i];
                    ba++;
                }
                else{
                    tbv+=vb[i];
                }
            }
            else{
                tbv+=vb[i];
            }
        }
        for(int i=0;i<(n+m+1);i++){
            if(us.find(i)==us.end()){
                rec[i]=tav+tbv+buv-vb[i];
            }
            else{
                rec[i]=tav+tbv+auv-va[i];
            }
        }
    }
    else{
        for(int i=0;i<(n+m+1);i++){
            if(vb[i]>va[i]){
                if(bb<m){
                    us.insert(i);
                    tbv+=vb[i];
                    bb++;
                }
                else if(bb==m){
                    auv=va[i];
                    buv=vb[i];
                    bb++;
                }
                else{
                    tav+=va[i];
                }
            }
            else{
                tav+=va[i];
            }
        }
        for(int i=0;i<(n+m+1);i++){
            if(us.find(i)==us.end()){
                rec[i]=tav+tbv+auv-va[i];
            }
            else{
                rec[i]=tav+tbv+buv-vb[i];
            }
        }

    }
    for(auto number:rec){
        cout<<number<<' ';
    }
    cout<<"\n";
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