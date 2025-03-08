#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==1&&a!=b){
        cout << 0<< endl;
        return 0;
    }
    if(n==1&&a==b){
        cout << 1 << endl;
        return 0;
    }
    if(n==2){
        cout << 1 << endl;
        return 0;
    }
    if(b-a<0){
        cout << 0<< endl;
        return 0;
    }
    

    n -= 2; // 2引く
    cout << b-a+1 + (n-1)*(b-a) << endl;


}