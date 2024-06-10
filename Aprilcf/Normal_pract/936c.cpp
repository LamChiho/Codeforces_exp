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


vector<int>vn1(100001,0);
vector<int>bn1(100001,0);

bool binary_searcher(vector<vector<int>>&rl,int father,int cur,int targn){
    int num1=1,block=0;
    for(int num:rl[cur]){
        if(num!=father){
            binary_searcher(rl,cur,num,targn);
            num1+=vn1[num];
            block+=bn1[num];
        }
    }
    if(num1>=targn){
        num1=0;
        block++;
    }
    vn1[cur]=num1;
    bn1[cur]=block;
    return false;
}
void solve(){
    int n,x,iptn,iptn1,cans;
    cin>>n>>x;
    vector<int>rec(n,0);
    vector<int>rec1(n,0);
    vector<vector<int>>rel(n,vector<int>(0));
    //build up the tree
    for(int i=1;i<n;i++){
        cin>>iptn>>iptn1;
        iptn1--;
        iptn--;
        rel[iptn1].push_back(iptn);
        rel[iptn].push_back(iptn1);
        rec[iptn1]++;
        rec[iptn]++;
        rec1[iptn1]++;
        rec1[iptn]++;
    }
    int lw=1,hi=n/2,mid;
    bool trig;
    while(lw<hi){
        mid=(lw+hi)/2;
        mid = max(mid,2);
        trig = binary_searcher(rel,-1,0,mid);
        trig = bn1[0]>x;
        for(int i=0;i<n;i++){
            rec1[i]=rec[i];
        }
        if(trig){
            lw=mid;
        }
        else{
            hi=mid-1;
        }
        if((lw+1)==hi){
            trig = binary_searcher(rel,-1,0,hi);
            trig = bn1[0]>x;
            if(trig){
                cout<<hi<<"\n";
                return;
            }
            else{
                cout<<lw<<"\n";
                return;
            }
        }
    }
    cout<<lw<<"\n";
    return;
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}