#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    //ビンゴのマス目を読む
    int N,a,b;
    vector<vector<int>> vec;
    for(int i=0;i<3;i+=1){
        vector<int> A;
        for(int j=0;j<3;j+=1){
            cin >>a;
            A.push_back(a);
        }
        vec.push_back(A);
    }
    cin >> N;
    //数値が当たっていたら、0で埋める
    for(int k=0;k<N;k+=1){
        cin>>b;
        for(int i=0;i<3;i+=1){
            for(int j=0;j<3;j+=1){
                if(vec[i][j]==b){
                    vec[i][j]=0;
                }
            }
        }
    }
    //判定を実施する。
    bool flag = false;
    for(int i=0;i<3;i+=1){
        //横方向のビンゴ判定
        if((vec[i][0]+vec[i][1]+vec[i][2])==0){
            flag = true;
        }
        //縦方向のビンゴ判定
        if((vec[0][i]+vec[1][i]+vec[2][i])==0){
            flag = true;
        }
    }
    //斜め方向のビンゴ判定
    if((vec[0][0]+vec[1][1]+vec[2][2])==0){
        flag = true;
    }
    if((vec[0][2]+vec[1][1]+vec[2][0])==0){
        flag = true;
    }
    //回答を出力
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    } 

}