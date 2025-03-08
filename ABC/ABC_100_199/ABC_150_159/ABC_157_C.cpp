#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;
using ll=long long;

int main(){
    int N,M,s,c;
    cin >>N>>M;
    vector<int> ve(N,-1);
    bool flag_conf = false;// 入力値に矛盾があるか調査
    for(int i=0;i<M;i+=1){
        cin >>s>>c;
        if(ve[s-1]==-1||ve[s-1]==c){//s桁目の値が-1 or 矛盾なしなら採用
            ve[s-1]=c;
        }
        else{
            flag_conf = true;//入力値に矛盾があるので、trueに変更
        }
    }
    //先頭の値が0ならその値は存在しないので矛盾。
    if(N>1&&ve[0]==0){
        flag_conf = true;
    }
    if(N>1&&ve[0]==-1){
        ve[0]=1;
    }
    if (N==1&&ve[0]==-1) {
        ve[0]=0;
    }
    //2桁目以降、-1があれば0に変更。
    for(int i=1;i<N;i+=1){
        if(ve[i]==-1){
            ve[i]=0;
        }
    }
    if(flag_conf){
        cout << -1 << endl;
    }
    else{
        int ans=0;
        for(int i=0;i<N;i+=1){
            ans =ans*10+ve[i];
        }
        cout << ans << endl;
    }
}