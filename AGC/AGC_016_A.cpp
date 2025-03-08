#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

bool cal(const string &x){
    for(int i=0;i<x.size()-1;i++){
        if(x[i]!=x[i+1]){
            //cout << x[i]<<x[i+1]<<endl;
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int cnt=1e8;
    for(int i=0;i<s.size();i++){
        char obj_char=s[i];
        string s_copy=s;
        int cnt_temp=0;
        while(true){
            //まず判定を実施する
            if(cal(s_copy)){
                break;
            }
            //文字列が全て同じでないので処理を実行
            string s_next;
            //操作をして文字列を作成する
            cnt_temp++;
            for(int j=0;j<s_copy.size()-1;j++){
                if(s_copy[j]==obj_char||s_copy[j+1]==obj_char){
                    s_next+=obj_char;
                }
                else{
                    s_next+=s_copy[j];
                }
            }
            //文字列を更新
            s_copy=s_next;
            //cout <<cnt_temp<<','<< s_copy<<endl;
        }
        cnt=min(cnt,cnt_temp);
    }
    cout << cnt<<endl;

}