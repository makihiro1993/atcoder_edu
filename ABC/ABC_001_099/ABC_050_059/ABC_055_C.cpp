#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;


int main(){
    ll n,m;
    cin>>n>>m;
    //Sのパズルを用いてSccを作成できる数を求める。
    ll cnt_a = min(n,m/2);
    ll cnt_puzzle_c = m-2*n;
    if(cnt_puzzle_c<=0){
        cout<< cnt_a << endl;
        return 0;
    }
    else{
        cout << cnt_a+cnt_puzzle_c/4 << endl;
    } 

}