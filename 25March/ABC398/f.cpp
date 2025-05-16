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



void manacher(const string& s, vector<int>& odd, vector<int>& even) {
    int n = s.size();
    int l=0,r=-1;
    for(int i=0;i<n;++i) {
        int k=(i>r)?1:min(odd[l+r-i],r-i+1);
        while((i-k>=0)&&(i+k<n)&&(s[i-k]==s[i+k]))k++;
        odd[i] = k;
        if(i+k-1>r) {
            l=i-k+1;
            r=i+k-1;
        }
    }
    l=0,r=-1;
    for(int i=0;i<n;++i) {
        int k =(i>r)?0:min(even[l+r-i+1],r-i+1);
        while(i-k-1>=0&&i+k<n&&s[i-k-1]==s[i+k])k++;
        even[i]=k;
        if(i+k-1>r){
            l=i-k;
            r=i+k-1;
        }
    }
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int>odd(n);
    vector<int>even(n);
    manacher(s, odd, even);
    for(int i=0;i<n;++i){
        bool trig=false;
        if(i+(odd[i]-1)>=n-1)trig=true;
        if(i+even[i]>=n)trig=true;
        if(trig){
            if(even[i]>=odd[i]){
                cout<<s;
                for(int cp=i-even[i]-1;cp>-1;cp--)cout<<s[cp];
                cout<<"\n";
            }
            else{
                cout<<s;
                for(int cp=i-odd[i];cp>-1;cp--)cout<<s[cp];
                cout<<"\n";

            }
            return;
        }
    }   
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}