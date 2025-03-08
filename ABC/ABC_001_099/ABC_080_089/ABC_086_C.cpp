#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int abs(int x){
    if(x>=0){
        return x;
    }
    else{
        return -x;
    }
}

int main(){
    int N,t,x1,x2;
    cin>>N;
    vector<vector<int>> vec={{0,0,0}}; //初期位置を記載する。
    for(int i=0;i<N;i+=1){
        vector<int> temp_vec(3,0);
        cin>>t>>x1>>x2;
        temp_vec[0]=t,temp_vec[1]=x1,temp_vec[2]=x2;
        vec.push_back(temp_vec);
    }
    //移動可能か判定を行う。
    bool flag=true;
    for(int i=0;i<N;i+=1){
        int t_delta,x_delta;
        t_delta = vec[i+1][0]-vec[i][0];
        x_delta = abs(vec[i+1][1]-vec[i][1])+abs(vec[i+1][2]-vec[i][2]);
        //cout <<t_delta << ',' <<x_delta << endl;
        //移動距離の総和が時間よりもかかる場合
        if(x_delta > t_delta){
            flag = false;
            break;
        }
        if((t_delta+x_delta)%2==1){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}