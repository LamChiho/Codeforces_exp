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

ll cur;

void solve() {
    int n;
    cin>>n;
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(((n/2)+1));
    dq.push_back(n);
    int cnt=1,tm=75;
    while(cnt>0&&tm>0){
        tm--;
        cout<<"? "<<dq[0]<<' '<<dq[1]<<' '<<dq[2]<<endl;
        cout.flush();
        cin>>cnt;
        if(cnt!=0){
            dq.pop_front();
            dq.push_back(cnt);
        }
    }
    cout<<"! "<<dq[0]<<' '<<dq[1]<<' '<<dq[2]<<endl;
    cout.flush();
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