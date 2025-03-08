#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b; 
}



int main(){
    ll A,B,C,D;
    cin>>A>>B>>C>>D;
    //Cで割り切れるポイントを計算する
    ll p_C = (B/C) - (A/C);
    if(A%C==0){
      p_C+=1;
    }
    ll p_D = (B/D) - (A/D);
    if(A%D==0){
      p_D+=1;
    }
    ll e = lcm(C,D);
    ll p_CD= (B/e)-(A/e);
    if(A%e==0){
      p_CD+=1;
    }
    //cout << p_C << p_D << p_CD << endl;
    ll ans = p_C+p_D - p_CD;
    cout << B-A+1-ans << endl;


    
}    
