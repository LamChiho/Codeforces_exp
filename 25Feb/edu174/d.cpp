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
    string s;
    cin>>s;
    int n=s.length();
    vector<int>vc;
    for(int i=0;(i*2)<n;i++){
        if(s[i]!=s[n-1-i])vc.emplace_back(i);
    }
    if(vc.size()==0){
        cout<<"0\n";
        return;
    }
    else{
        vector<int>rec(26,0);
        for(int i=vc[0];i<=vc[vc.size()-1];i++){
            rec[s[i]-'a']++;
            rec[s[n-1-i]-'a']--;
        }
        int cs=0;
        for(int i=0;i<26;i++)if(rec[i]!=0)cs++;
        if(cs==0){
            cout<<(vc[vc.size()-1]-vc[0]+1)<<"\n";
            return;
        }
        else{
            int rightb=n-1-vc[0],cans=n;
            cans=rightb-vc[0]+1;
            vector<int>tr(26,0);
            for(int i=vc[0];i<=rightb;i++)tr[s[i]-'a']++;
            vector<int>r1(26,0);
            bool trig;
            for(int i=vc[0];i<=rightb;i++){
                r1[s[i]-'a']++;
                trig=true;
                if(i*2>=n){
                for(int j=0;j<26;j++){
                    if(r1[j]*2<tr[j]){trig=false;
                    break;}
                }                
                if(trig){
                    cans=min(cans,(i-vc[0]+1));
                }
                }
            }
            for(int j=0;j<26;j++)r1[j]=0;
            for(int i=rightb;i>=vc[0];i--){
                r1[s[i]-'a']++;
                trig=true;
                if(i*2<n){
                for(int j=0;j<26;j++){
                    if(r1[j]*2<tr[j]){trig=false;
                    break;}
                }
                if(trig){
                    cans=min(cans,(rightb-i+1));
                    break;
                }
                }
                
            }
            cout<<cans<<"\n";
        }
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