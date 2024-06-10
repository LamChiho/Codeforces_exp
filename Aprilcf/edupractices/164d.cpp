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
    int n,iptn;
    cin>>n;
    vector<int>vc(n);
    for(int i=0;i<n;i++){
        cin>>iptn;
        vc[i]=iptn;
    }
    sort(vc.begin(),vc.end());
    vector<int>recorder(5001,0);
    recorder[0]++;
    long long tts=0,ods=0,odn=0,evs=0,evn=0,fc;
    for(int i=0;i<n;i++){
        iptn = vc[i];
        for(int j=0;j<iptn;j++){
            fc = recorder[j];
            fc*=iptn;
            tts+=fc;
        }
        for(int j=iptn;j<5001;j++){
            fc=recorder[j];
            fc*=((j+iptn)/2+(j+iptn)%2);
            tts+=fc;
        }
        for(int j=5001;j>-1;j--){
            fc=j+iptn;
            if(fc>5000){
                if((fc%2)==0){
                    evn+=recorder[j];
                    evs+=(recorder[j]*fc);
                }
            }

        }
    }

}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main() {
    // Write C++ code here
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}