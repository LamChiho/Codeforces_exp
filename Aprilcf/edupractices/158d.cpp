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
    unordered_map<int,int>right_popped;
    //priority queues remakrs the worst case that can happen
    //worst case is that the random fix everything on the other side, then comes here
    //hence, the right hand side is already fixed
    //for the left hand side, we need to push is n-i-1 + v
    //right hand side, the maximum number might already popped, so use a map to fix it.
    priority_queue<int>rpq;
    priority_queue<int>lpq;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
        rpq.push(i+iptn);
        right_popped[i+iptn]=0;
    }
    lpq.push(0);
    rpq.push(0);
    int cans=rpq.top(),cur,trig;
    for(int i=0;i<n;i++){
        cur = vc[i];
        right_popped[vc[i]+i]++;
        trig=1;
        while(trig>0){
            iptn = rpq.top();
            if(right_popped[iptn]>0){
                right_popped[iptn]--;
                rpq.pop();
            }
            else{
                trig--;
            }
        }
        iptn = rpq.top();
        cur = max(cur,iptn);
        iptn = lpq.top();
        cur = max(cur,iptn);
        lpq.push(vc[i]+n-1-i);
        cans = min(cans,cur);
    }
    cout<<cans<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    // Write C++ code here
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}