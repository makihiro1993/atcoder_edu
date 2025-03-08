#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

int main(){
    string d;
    cin>>d;
    vector<string> a = {"N", "E", "W", "S", "NE", "NW", "SE", "SW"};
    vector<string> b = {"S", "W", "E", "N", "SW", "SE", "NW", "NE"};
    for(int i=0;i<a.size();i++){
        if(a[i]==d){
            cout << b[i]<< endl;
            return 0;
        }
    }

}