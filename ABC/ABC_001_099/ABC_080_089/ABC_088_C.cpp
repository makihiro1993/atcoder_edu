#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int c;
    int value_sum=0;
    vector<vector<int>> vec;
    for(int i=0;i<3;i+=1){
        vector<int> temp_vec;
        for(int j=0;j<3;j+=1){
            cin>>c;
            temp_vec.push_back(c);
            value_sum +=c;
        }
        vec.push_back(temp_vec);
    }
    //体格成分と合計値をそれぞれ出す
    int value_1= vec[0][0]+vec[1][1]+vec[2][2];
    int value_2= value_sum/3;
    if(value_sum%3==0 && value_1==value_2){
        cout << "Yes" << endl;
    }
    else{
        cout <<"No"<< endl;
    }
    
}