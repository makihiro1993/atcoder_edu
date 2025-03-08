#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;
using ll=long long;

int main(){
    ll N,K;
    cin>>N>>K;
    double prob = 0.0;
    for(ll i=0;i<N;i+=1){
        double prob_dice = 1.0/N;
        //コインで表が出続ける必要のある回数を求める。
        if(i+1<K){
          double n = log2(K/(i+1.0));
          int num = static_cast<int>(ceil(n)); //回数の切り上げを実施
          double prob_temp = prob_dice*pow((0.5),num);
          prob += prob_temp;
        }
        else{
          prob +=prob_dice;
        }
        
    }
    cout << fixed << setprecision(15);
    cout << prob << endl;
}