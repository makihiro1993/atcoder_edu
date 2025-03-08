#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string a,b;
    cin >>a>>b;
    string x;
    x = a+b;
    int num = stoi(x);
    //cout << num << endl;
    int sq = sqrt(num);
    if (sq*sq==num){
        cout << "Yes" << endl;
    }
    else{
        cout << "No"<<endl;
    }


}