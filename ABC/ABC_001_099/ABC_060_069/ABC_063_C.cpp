#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,s;
    cin>>N;
    vector<int> vec;
    int sum_value=0;
    for(int i=0;i<N;i+=1){
        cin>>s;
        vec.push_back(s);
        sum_value += s;
    }
    //10の倍数ではない最小値を探索する。
    int min_value = 101;
    bool flag = true;
    for(int i=0;i<N;i+=1){
      //cout << vec[i]<<endl;
        if(vec[i]%10 !=0){
            min_value = min(min_value,vec[i]);
            flag = false;
        }
    }
    //cout << min_value << endl;
    //全て10の倍数であった場合、0にする
    if(flag){
        min_value=0;
    }
    //cout << min_value << endl;
    if(sum_value%10 !=0){
        cout << sum_value << endl;
    }
    else{
        sum_value -= min_value;
        if(sum_value%10 !=0){
            cout << sum_value << endl;
        }
        else{
            cout << 0 << endl;
        }
    }



}