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
#include <string_view>
#include<cmath>
#include<set>
#include<map>
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,q,w,ret,l,pos,tw;
    cin>>n>>q;
    vector<int>vc(n);
    for(int i=0;i<n;i++)cin>>vc[i];
    vector<int>r1(30,0);
    vector<vector<int>>rec(n,vector<int>(30,0));
    vector<int>v1(n);
    for(int i=(n-1);i>-1;i--){
        if(i==(n-1))v1[i]=vc[i];
        else v1[i]=(vc[i]^v1[i+1]);
    }
    for(int i=0;i<n;i++){
        for(int j=29;j>-1;j--){
            if(vc[i]&(1<<j)){
                for(int k=j;k>-1;k--){
                    r1[k]=i;
                }
            }
            rec[i][j]=r1[j];
        }
    }
    for(int i=0;i<q;i++){
        cin>>w;
        if(w<vc[n-1]){
            cout<<"0 ";
        }
        else{
            l=n-1,pos=n-1,tw=w;
            while(l>-1){
                //cout<<l<<' '<<tw<<"\n";
                if(tw>=vc[l]){
                    for(int j=29;j>-1;j--){
                        if(tw&(1<<j)){
                            pos=rec[l][j];
                            break;
                        }
                    }
                    if(pos<l){
                        tw=w^v1[pos+1];
                        if(tw>=vc[pos]){
                            tw^=vc[pos];
                            l=pos-1;
                        }
                        else l=pos;
                    }
                    else{                        
                        if(tw>=vc[pos]){
                            tw^=vc[pos];
                            l=pos-1;
                        }
                    }
                }
                else{
                    break;
                }
            }
            cout<<(n-1-l)<<' ';
        }
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}