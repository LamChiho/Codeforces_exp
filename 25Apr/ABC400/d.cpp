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


void solve() {
    priority_queue<pair<int,int>>pq;
    int h,w,p1y,p1x,p2y,p2x;
    cin>>h>>w;
    vector<string>vs(h);
    for(int i=0;i<h;i++)cin>>vs[i];
    cin>>p1y>>p1x>>p2y>>p2x;
    p1y--,p1x--,p2y--,p2x--;
    pq.push(make_pair(0,1000*p1y+p1x));
    bool trig = true;
    vector<int>seen(1000001,-10000000);
    seen[1000*p1y+p1x]=0;
    int v1,v2,py,px;
    while(pq.size()>0){
        v1=pq.top().first,v2=pq.top().second;
        pq.pop();
        py=v2/1000,px=v2%1000;
        py++;
        if(px>-1&&px<w&&py>-1&&py<h){
            if((seen[py*1000+px]<v1&&vs[py][px]=='.')||(seen[py*1000+px]<=(v1-1))){
            if(vs[py][px]=='.'&&seen[py*1000+px]<v1){pq.push(make_pair(v1,py*1000+px));seen[py*1000+px]=v1;}
            else{ if(seen[py*1000+px]<(v1-1)){ pq.push(make_pair(v1-1,py*1000+px));
                seen[py*1000+px]=v1-1;}
                if(px>-1&&px<w&&py>-1&&(py+1)<h)if(seen[py*1000+px+1000]<(v1-1))seen[py*1000+px+1000]=v1-1,pq.push(make_pair(v1-1,py*1000+px+1000));
            }}
        }
        py--;
        py--;
        if(px>-1&&px<w&&py>-1&&py<h){
            if((seen[py*1000+px]<v1&&vs[py][px]=='.')||(seen[py*1000+px]<=(v1-1))){
            if(vs[py][px]=='.'&&seen[py*1000+px]<v1){pq.push(make_pair(v1,py*1000+px));seen[py*1000+px]=v1;}
            else{if(seen[py*1000+px]<(v1-1)){ pq.push(make_pair(v1-1,py*1000+px));
                seen[py*1000+px]=v1-1;}
                if(px>-1&&px<w&&py>0&&py<h)if(seen[py*1000+px-1000]<(v1-1))seen[py*1000+px-1000]=v1-1,pq.push(make_pair(v1-1,py*1000+px-1000));
            }}
        }
        py++;
        px++;
        if(px>-1&&px<w&&py>-1&&py<h){
            if((seen[py*1000+px]<v1&&vs[py][px]=='.')||(seen[py*1000+px]<=(v1-1))){
            if(vs[py][px]=='.'&&seen[py*1000+px]<v1){pq.push(make_pair(v1,py*1000+px));seen[py*1000+px]=v1;}
            else{if(seen[py*1000+px]<(v1-1)){ pq.push(make_pair(v1-1,py*1000+px));
                seen[py*1000+px]=v1-1;}
                if(px>-1&&px<(w-1)&&py>-1&&py<h)if(seen[py*1000+px+1]<(v1-1))seen[py*1000+px+1]=v1-1,pq.push(make_pair(v1-1,py*1000+px+1));
            }}
        }
        px--;
        px--;
        if(px>-1&&px<w&&py>-1&&py<h){
            if((seen[py*1000+px]<v1&&vs[py][px]=='.')||(seen[py*1000+px]<=(v1-1))){
            if(vs[py][px]=='.'&&seen[py*1000+px]<v1){pq.push(make_pair(v1,py*1000+px));seen[py*1000+px]=v1;}
            else{if(seen[py*1000+px]<(v1-1)){ pq.push(make_pair(v1-1,py*1000+px));
                seen[py*1000+px]=v1-1;}
                if(px>0&&px<w&&py>-1&&py<h)if(seen[py*1000+px-1]<(v1-1))seen[py*1000+px-1]=v1-1,pq.push(make_pair(v1-1,py*1000+px-1));
            }}
        }
        px++;
    }
    cout<<(-seen[p2y*1000+p2x])<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);
    solve();
}