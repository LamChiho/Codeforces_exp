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
//分成三个情况来处理比较好，最后的pop的结果是比这个小的，比这个大的，一样的。
int binary_helper(vector<int>&vc,long long targn,long long rounds){
    int sz=vc.size();
    while(targn<vc[sz-1]){
        sz--;
    }
    //remember, how many rounds can be popped without changing the size
    long long dif,RoundCanPop;
    while(rounds>0){
        dif=targn-vc[sz-1];
        RoundCanPop=dif/sz+1;
        targn-=min(rounds,RoundCanPop)*sz;
        rounds-=min(rounds,RoundCanPop);
        while(targn<vc[sz-1]){
            sz--;
        }
        if(sz<1){
            break;
        }
    }
    if(targn<1){
        return -1;
    }
    else if(targn==1){
        return 0;
    }
    else{
        return 1;
    }
}

void solve(){
    int n,k,iptn;
    cin>>n>>k;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    if(vc[0]>1){
        cout<<1<<"\n";
        return;
    }
    long long lw=1,hi=40000000001,mid;
    while(lw<hi){
        //cout<<lw<<" "<<hi<<endl;
        mid=(lw+hi)/2;
        iptn = binary_helper(vc,mid,k);
        if(iptn>-1){
            hi=mid;
        }
        else if(iptn==-1){
            lw=mid+1;
        }
        if((lw+1)==hi){
            iptn = binary_helper(vc,lw,k);
            if(iptn==0){
                cout<<lw<<"\n";
                return;
            }
            else{
                cout<<hi<<"\n";
                return;
            }
        }
    }
    cout<<lw<<"\n";
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