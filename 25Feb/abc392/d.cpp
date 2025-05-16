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
#include<iomanip>
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n,k;
    cin>>n;
    vector<vector<int>>map(n);
    vector<double>szr(n);
    for(int i=0;i<n;i++){
        cin>>k;
        map[i]=vector<int>(k,0);
        for(int j=0;j<k;j++){
            cin>>map[i][j];
        }
        szr[i]=(double)k;
        sort(map[i].begin(),map[i].end());
    }
    double prob=0,cprob;
    int l1,l2,crn,cl,cp,ln;
    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            int p1=0,p2=0;
            ln=-1,cl=0;
            cprob=0.0;
            while(p1<map[i].size()&&p2<map[j].size()){
                if(map[i][p1]==map[j][p2]){
                    l1=0,l2=0,ln=map[i][p1];
                    while(p1<map[i].size()){
                        if(map[i][p1]==ln){
                            p1++;
                            l1++;
                        }
                        else break;
                    }
                    while(p2<map[j].size()){
                        if(map[j][p2]==ln){
                            p2++;
                            l2++;
                        }
                        else break;
                    }
                    cprob+=((double)(l1)*(double)(l2))/(szr[i]*szr[j]);
                }
                else{
                    if(map[i][p1]<map[j][p2])p1++;
                    else p2++;
                }
            }
            cprob+=(double)(cl*cl)/(szr[i]*szr[j]);
            prob=max(prob,cprob);
            //cout<<i<<' '<<j<<' '<<cprob<<"\n";
        }
    }
    cout<<setprecision(10)<<prob<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}