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
    int n,d,x;
    cin>>n>>d;
    if(d==0){
        int cans=0;
        vector<int>vc(n);
        for(int i=0;i<n;i++)cin>>vc[i];
        sort(vc.begin(),vc.end());
        for(int i=0;i<n;i++){
            if(i==0)cans++;
            else if(vc[i]!=vc[i-1])cans++;
        }
        cout<<(n-cans)<<"\n";
    }
    else{
        vector<vector<int>>mp(d);
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x%d].emplace_back(x);
        }
        int cans=0,n1,n2,ln,cnt,tn1,tn2,lun,sz;
        for(int i=0;i<d;i++){
            if(mp[i].size()>0){
            sort(mp[i].begin(),mp[i].end());
            lun=-1,ln=-1,n1=0,n2=0,cnt=0;
            for(size_t j=0;j<mp[i].size();j++){
                if(j==0){ln=mp[i][0],lun=mp[i][0]-d-1;}
                if(mp[i][j]!=ln){
                    if(lun<(ln-d)){
                        tn1=n1+cnt,tn2=n1;
                        n1=tn1,n2=tn2;
                    }
                    else{
                        tn1=max(n1,n2+cnt),tn2=n1;
                        n1=tn1,n2=tn2;
                    }
                    lun=ln;
                    ln=mp[i][j];
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            if(lun<(ln-d)){
                tn1=n1+cnt,tn2=n1;
                n1=tn1,n2=tn2;
            }
            else{
                tn1=max(n1,n2+cnt),tn2=n1;
                n1=tn1,n2=tn2;
            }
            cans+=max(n1,n2);}
        }
        cout<<(n-cans)<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}