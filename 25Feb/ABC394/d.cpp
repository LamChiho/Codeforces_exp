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
    vector<char>vc;
    for(int i=0;i<n;i++){
        if(s[i]==')'){
            if(vc.size()>0){
                if(vc.back()=='(')vc.pop_back();
                else{
                    cout<<"No\n";
                    return;
                }
            }
            else{
                cout<<"No\n";
                return;
            }
        }
        else if(s[i]==']'){
            if(vc.size()>0){
                if(vc.back()=='[')vc.pop_back();
                else{
                    cout<<"No\n";
                    return;
                }
            }
            else{
                cout<<"No\n";
                return;
            }
        }
        else if(s[i]=='>'){
            if(vc.size()>0){
                if(vc.back()=='<')vc.pop_back();
                else{
                    cout<<"No\n";
                    return;
                }
            }
            else{
                cout<<"No\n";
                return;
            }
        }
        else{
            vc.emplace_back(s[i]);
        }
    }
    if(vc.size()==0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}