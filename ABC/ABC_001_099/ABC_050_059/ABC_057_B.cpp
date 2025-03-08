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
    int N,M,a,b,c,d;
    cin >>N>>M;
    vector<vector<int>> coo_std, coo_chk;
    //学生の座標
    for(int i=0;i<N;i+=1){
        vector<int> temp(2,0);
        cin >>a>>b;
        temp[0]=a,temp[1]=b;
        coo_std.push_back(temp);
    }
    //チェックポイントの座標
    for(int i=0;i<M;i+=1){
        vector<int> temp(2,0);
        cin>>c>>d;
        temp[0]=c,temp[1]=d;
        coo_chk.push_back(temp);
    }
    vector<int> ans;
    for(int i=0;i<N;i+=1){
        int num = INT32_MAX;
        int value;
        int current_opt;
        for(int j=0;j<M;j+=1){
            value = abs(coo_std[i][0]-coo_chk[j][0])+abs(coo_std[i][1]-coo_chk[j][1]);
            //cout <<coo_std[i][0]<<'-'<<coo_chk[j][0]<<'+'<<coo_std[i][1]<<'-'<<coo_chk[j][1]<<endl;
            //cout << value << endl;
            if(value<num){
                num = value;
                current_opt = j+1;
            }
        }
        ans.push_back(current_opt);
    }
    for(int i=0;i<N;i+=1){
        cout << ans[i]<<endl;
    }

}