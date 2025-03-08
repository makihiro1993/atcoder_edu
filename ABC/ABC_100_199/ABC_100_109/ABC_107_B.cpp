#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    char a;
    vector<vector<char>> vec;
    vector<char> vec_temp;
    for(int i=0;i<H;i+=1){
        vec_temp.clear();
        bool flag = false;
        for(int j=0;j<W;j+=1){
            cin>>a;
            if(a=='#'){
                flag=true;
            }
            vec_temp.push_back(a);
        }
        //flag=trueの場合のみ、加える。
        if(flag){
            vec.push_back(vec_temp);
        }
    }
    //H方向はもう変わらない。
    H = vec.size();
    //W方向は変わるのでwhile文でloopを行う。
    while(true){
        int coo =-1;
        W = vec[0].size();
        bool flag = false;
        for(int i=0;i<W;i+=1){
            for(int j=0;j<H;j+=1){
                if(vec[j][i]=='#'){
                    flag=false;
                    break;
                }
                else{
                    flag=true;
                }
            }
            if(flag){
                //cout << coo <<endl;
                coo = i;
                break;
            }
        }
        if(coo==-1){
            break;
        }
        //coo位置の要素を削除する。
        for(int j=0;j<H;j+=1){
            vec[j].erase(vec[j].begin()+coo);
        }
        
    }
    W = vec[0].size();
    for(int i=0;i<H;i+=1){
        for(int j=0;j<W;j+=1){
            cout << vec[i][j];
        }
        cout<<endl;

    }
    

}