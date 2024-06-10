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

vector<int>vc(70);

void solve(){
    int minused=0,cp=0;
    long long n;
    string s;
    cin>>s>>n;
    int curl=s.length(),ol = s.length();
    while(n>curl){
        n-=curl;
        curl--;
        minused++;
    }
    vector<char>vc(ol);
    for(int i=0;i<ol;i++){
        if(i==0){
            vc[cp]=s[i];
        }
        else if((vc[cp]-'a')>(s[i]-'a')){
            while((minused>0)&&(((vc[cp]-'a')>(s[i]-'a')))&&(cp>=0)){
                minused--;
                cp--;
            }
            cp++;
            vc[cp]=s[i];
        }
        else{
            cp++;
            vc[cp]=s[i];
        }
    }
    cout<<vc[n-1];
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}