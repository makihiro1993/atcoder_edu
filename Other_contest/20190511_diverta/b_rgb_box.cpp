#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int c,N;
    vector<int> vec;
    for(int i=0;i<3;i+=1){
        cin>>c;
        vec.push_back(c);
    }
    cin>>N;
    //小さい順にRGBとする。
    sort(vec.begin(),vec.end());
    int r,g,b;
    r=vec[0],g=vec[1],b=vec[2];
    //購入個数の最大値。
    int num_max = N/r +1;
    int x,y,z;
    int cnt =0;
    for(x=0;x<num_max;x+=1){
        for(y=0;y<num_max;y+=1){
            int value = N-r*x-g*y;
            if(value<0){
                break;
            }
            if(value%b ==0){
                cnt+=1;
            }
        }
    }
    cout << cnt << endl;

}