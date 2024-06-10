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
    int n,x,curl,open,cans=-1,curn,iptn;
    cin>>n>>x;  // 输入 n 和 x
    vector<int>vc(n);  // 定义一个长度为 n 的整数向量 vc
    int nb=n;  // 将 nb 初始化为 n
    for(int i=0;i<n;i++){  // 遍历输入的 n 个整数
        cin>>iptn;  // 输入一个整数
        vc[i]=iptn;  // 将输入的整数存入向量 vc
    }
    x++;  // 将 x 增加 1
    int cur=1;  // 初始化 cur 为 1
    for(int i=0;i<29;i++){  // 计算 cur 的值，从 2^30 开始递减
        cur*=2;
    }
    //cout<<cur<<endl;
    vector<int>pusher;  // 定义一个空向量 pusher
    for(int i=29;i>-1;i--){  // 从最高位开始迭代到最低位
        open=0;  // 初始化 open 为 0
        for(int j=0;j<nb;j++){  // 遍历 nb 个数
            if(open==0){  // 如果 open 为 0
                curn=vc[j];  // 将当前数赋值给 curn
            }
            else{
                curn^=vc[j];  // 否则，将当前数与 curn 进行异或运算
            }
            if((vc[j]&cur)>0){  // 如果当前数的第 i 位为 1
                open = 1-open;  // 切换 open 的值
            }
            if(open==0){  // 如果 open 为 0
                pusher.push_back(curn);  // 将 curn 添加到 pusher 中
            }
        }
        if(x&cur){  // 如果 x 的第 i 位为 1
            if(open==0){  // 如果 open 为 0
                cans = max(cans,(int)pusher.size());  // 更新结果为 cans 和 pusher 的长度中的较大值
            }
            iptn = pusher.size();  // 获取 pusher 的长度
            for(int i=0;i<iptn;i++){  // 遍历 pusher 的长度
                pusher.pop_back();  // 弹出 pusher 的最后一个元素
            }
        }
        else{
            if(open==0){  // 如果 open 为 0
                nb = pusher.size();  // 更新 nb 为 pusher 的长度
                for(int j=0;j<nb;j++){  // 遍历 nb
                    vc[j]=pusher[j];  // 更新 vc 中的元素为 pusher 中的元素
                }
                for(int j=0;j<nb;j++){  // 再次遍历 nb
                    pusher.pop_back();  // 弹出 pusher 的最后一个元素
                }
            }
            else{  // 否则
                cout<<cans<<"\n";  // 输出结果并换行
                return;  // 结束函数
            }
        }
        cur/=2;  // 递减 cur
        //cout<<cur<<endl;
    }
    cout<<cans<<"\n";  // 输出结果并换行
    return;  // 返回
}

int main() {
    ios_base::sync_with_stdio(false);  // 关闭输入输出流的同步
    cin.tie(nullptr);  // 解除 cin 和 cout 的绑定
    // Write C++ code here
    int t;
    cin>>t;  // 输入 t
    while(t--){  // 当 t 不为 0 时循环
        solve();  // 调用 solve 函数
    }
}
