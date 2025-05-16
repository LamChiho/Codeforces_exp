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
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if((n%2))cout<<"-1\n";
    else{
        int lefpopped=0,lf=0,rt=n-1,sz=n;
        vector<int>printer;
        deque<int>dq;
        for(int i=0;i<n;i++)dq.push_back(s[i]-'0');
        while(sz>0){
            if(dq[lf]!=dq[sz-1]){
                dq.pop_back();
                dq.pop_front();
                sz-=2;
            }
            else{
                if(dq[lf]==0){
                    printer.push_back(lefpopped+sz);
                    dq.pop_front();
                    dq.push_back(0);
                }
                else{
                    printer.push_back(lefpopped);
                    dq.push_front(1);
                    dq.pop_back();
                }
            }
            lefpopped++;
            if(printer.size()>300){
                cout<<"-1\n";
                return;
            }
        }
        cout<<(printer.size())<<"\n";
        for(auto num:printer)cout<<num<<' ';
        cout<<"\n";
    }
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