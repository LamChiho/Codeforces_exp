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

bool binary_searcher(vector<int>&vc,long long targn,vector<long long>&vs){
    vector<vector<long long>>v1;//for each position, what is the minimum cost
    int nb=vc.size(),cp=0,trig=0;
    vector<long long>to_push(2);
    long long pv1;
    for(int i=0;i<nb;i++){
        if(i==0){ 
            to_push[0]=0;
            to_push[1]=vc[0];
            v1.push_back(to_push);
        }
        else{
            trig=0;
            while((cp<v1.size())&&(trig==0)){
                if((vs[i-1]-vs[v1[cp][0]])>targn){
                    cp++;
                }
                else{
                    pv1 = vc[i]+v1[cp][1];
                    if(pv1<=targn){
                        trig=0;
                        while((!v1.empty())&&(trig==0)){
                            trig = v1.size();
                            trig--;
                            if(v1[trig][1]>=pv1){
                                v1.pop_back();
                                trig=0;
                            }
                            else{
                                trig=1;
                            }
                        }
                        to_push[0]=i;
                        to_push[1]=pv1;
                        v1.push_back(to_push);
                        trig=1;
                    }
                    else{
                        trig=1;
                    }
                }
            }
        }
    }
    trig = v1.size();
    trig--;
    if(trig<0){
        return false;
    }
    return v1[trig][0]==nb-1;
}

void solve(){
    int n,iptn,mxn=0;
    cin>>n;
    vector<int>vc(n+2);
    vc[0]=0;
    long long curs=0;
    vector<long long>vs(n+2);
    vs[0]=0;
    for(int i=1;i<=n;i++){
        cin>>iptn;
        vc[i]=iptn;
        curs+=iptn;
        vs[i]=curs;
        mxn=max(mxn,iptn);
    }
    vs[n+1]=curs;
    vc[n+1]=0;
    long long hi=100000000000000000,lw=mxn,mid;
    while(lw<hi){
        mid=(lw+hi)/2;
        //cout<<lw<<' '<<mid<<' '<<hi<<endl;
        if(binary_searcher(vc,mid,vs)){
            hi=mid;
        }
        else{
            lw=mid+1;
        }
        if((lw+1)==hi){
            if(binary_searcher(vc,lw,vs)){
                cout<<lw<<"\n";
            }
            else{
                cout<<hi<<"\n";
            }
            return;
        }
    }
    cout<<lw<<"\n";
}


int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}