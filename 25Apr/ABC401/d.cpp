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

constexpr ll mod=998244353,md2=1000000000;


void solve() {
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<char>pt(n);
    for(int i=0;i<n;i++){
        pt[i]=s[i];
        if(s[i]=='o'){
            if(i>0)if(s[i-1]=='?')pt[i-1]='.';
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            if((i+1)<n)if(s[i+1]=='?')pt[i+1]='.';
        }
    }
    int posO=0,cl=0;
    for(int i=0;i<n;i++){
        if(pt[i]=='?')cl++;
        else{
            if(pt[i]=='o')posO++;
            posO+=(cl%2+cl/2);
            cl=0;
        }
    }
    posO+=(cl%2+cl/2);
    cl=0;
    if(posO>k)for(auto ch:pt)cout<<ch;
    else{
        for(int i=0;i<n;i++){
            if(pt[i]=='?')cl++;
            else{
                if(cl%2){
                    for(int j=1;j<=cl;j++){
                        if(j%2)pt[i-j]='o';
                        else pt[i-j]='.';
                    }
                }
                cl=0;
            }
        }
        if(cl%2){
            for(int j=1;j<=cl;j++){
                if(j%2)pt[n-j]='o';
                else pt[n-j]='.';
            }
        }
        for(auto ch:pt)cout<<ch;
    }
    cout<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}