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
    int n,iptn;
    cin>>n;
    vector<int>v1(n+1);
    vector<int>v2(n+1);
    for(int i=0;i<n;i++){
        cin>>iptn;
        v1[iptn]=i;
    }
    for(int i=0;i<n;i++){
        cin>>iptn;
        v2[iptn]=i;
    }
    int lft,right,n1,n2,lbd,rbd;
    long long calc,cur=1;
    for(int i=1;i<=n;i++){
        n1=v1[i],n2=v2[i];
        lbd=-1,rbd=n;
        if(i==1){
            lft=v1[i];
            right=v1[i];
            lft=min(lft,v2[i]);
            right=max(right,v2[i]);
            //triple calculate, 0~lf-1,right+1~n-1,lf+1~right-1;
            calc = lft+1;
            calc*=lft;
            calc/=2;
            cur+=calc;
            calc = n-right;
            calc*=(n-1-right);
            calc/=2;
            cur+=calc;
            calc = right-lft-1;
            calc *= (right-lft);
            calc/=2;
            cur+=calc;
        }
        else{
            lft = min(lft,v1[i-1]);
            lft = min(lft,v2[i-1]);
            right = max(right,v1[i-1]);
            right = max(right,v2[i-1]);
            if((n1>=lft)&&(n1<=right)){
                calc=-1;
            }
            else if((n2>=lft)&&(n2<=right)){
                calc=-1;
            }
            else{
                if(n1>right){
                    rbd=min(rbd,n1);
                }
                if(n2>right){
                    rbd = min(rbd,n2);
                }
                if(n1<lft){
                    lbd=max(lbd,n1);
                }
                if(n2<lft){
                    lbd = max(lbd,n2);
                }
                calc = lft-lbd;
                calc*=(rbd-right);
                cur+=calc;
            }
        }
        //cout<<cur<<' '<<lft<<' '<<right<<' '<<lbd<<' '<<rbd<<' '<<i<<endl;
    }
    cout<<cur<<"\n";
}


int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}