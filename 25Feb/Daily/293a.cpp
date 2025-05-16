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
#include<map>
typedef long long ll; 

constexpr ll mod=998244353;

void solve() {
    string s1,s2;
    cin>>s1>>s2;
    map<int,int>mp;
    unordered_map<int,int>ump;
    vector<int>vc1;
    int n=s1.length(),tg=0,r1,cdif,sml=0;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        if(sml>0&&s2[i]!='a'){
            tg=2;
            break;
        }
        if(sml>0&&s1[i]!='z'){
            vc[i]++;
            tg++;
            r1=i;
            cdif=(s1[i]-'a')+1;
            break;
        }
        if(((s2[i]-'a')-(s1[i]-'a'))>1){
            vc[i]++;
            tg++;
            r1=i;
            cdif=(s1[i]-'a')+1;
            break;
        }
        else if(s2[i]>s1[i]){
            sml++;
            r1=i;
            cdif=(s1[i]-'a')+1;
        }
    }
    if(tg==0){
        cout<<"No such string\n";
    }
    else if(tg==1){
        char c='a'+cdif;
        for(int i=0;i<n;i++){
            if(i!=r1)cout<<s1[i];
            else cout<<c;
        }
        cout<<"\n";
    }
    else{
        char c='a'+cdif;
        for(int i=0;i<n;i++){
            if(i<r1)cout<<s1[i];
            else if(i==r1)cout<<c;
            else cout<<'a';
        }
        cout<<"\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}