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
    //to find out a place leaves from right or left, calculate the contrary side of both
    //
    int n;
    string s;
    cin>>n>>s;
    int lfc=0,rtc=0,curs;
    vector<int>rhls;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            rtc+=2;
            rhls.push_back(i);
        }
    }
    //calculate the current right hand < scores and push them in stack
    long long lfp,rtp;
    int rhp = 0;//rhp should always be the usable <s;
    vector<int>lfrs;//the stack for all the > , push them in stack
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            curs=1;
            rhp++;
            rtc-=2;
        }
        else{
            curs=-1;
            //after everything is done
            lfc+=2;
            lfrs.push_back(i);
        }
    }
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}