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
    int w=0;
    int n=0;
    int cmx=0;
    int cmi = 1000000000;
    int curv = 0;
    cin>>n;
    cin>>w;
    vector<int>vc(n);
    int lb=-1;
    int ipt=0;
    bool trig=false;
    for(int i=0;i<n;i++){
        cin>>ipt;
        cmi = min(cmi,ipt);
        cmx = max(cmx,ipt);
        vc[i]=ipt;
    }
    int higher = w/n;
    long long hi = cmx+w,lo = cmi,mid = 0,curdif = 0;
    while(hi>lo){
        curdif = 0;
        mid = lo;
        mid+=hi;
        mid/=2;
        trig = true;
        for(int nb:vc){
            if(mid>nb){
                curdif+=(mid-nb);
            }
        }
        if(curdif<w){
            lo = mid;
        }
        else if(curdif>w){
            hi = mid-1;
        }
        else{
            lo = mid;
            hi = mid;
            break;
        }
        if((lo+1)==hi){
            curdif = 0;
            for(int nb:vc){
                if(hi>nb){
                    curdif+=(hi-nb);
                }
            }
            if(curdif<=w){
                lo = hi;
                break;
            }
            else{
                hi = lo;
                break;
            }
        }
    }
    std::cout<<lo<<"\n";
}
int main(){
    int t = 0;
    std::cin>>t;
    while(t>0){
        solve();
        t--;
    }
    return 0;
}