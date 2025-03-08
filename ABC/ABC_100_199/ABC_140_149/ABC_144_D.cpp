#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    int a,b,x;
    cin>>a>>b>>x;
    double tan_th_1 = 2.0*(b-1.0*x/(1.0*a*a))/a;
    double tan_th_2 = 1.0*(a*b*b)/(2*x);
    double ans_1 = atan(tan_th_1)*180/M_PI,ans_2=atan(tan_th_2)*180/M_PI;
    double v_temp=0.5*a*a*b;
    if(x>=v_temp){
      cout << std::fixed << std::setprecision(15) <<ans_1<<endl;
    }
    else{
      cout << std::fixed << std::setprecision(15) <<ans_2<<endl;
    }
}