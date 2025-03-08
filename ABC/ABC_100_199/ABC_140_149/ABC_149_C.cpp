#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

using ll=long long;

bool prime(ll n){
    for(ll div=3;div<n;div+=2){
        if(n%div==0){
            return false;
        }
    }
    return true;
}


int main(){
    ll X;
    cin>>X;
    if(X==2){
        cout << X << endl;
        return 0;
    }
    if(X%2==0) X+=1;
    while(true){
        bool flag = prime(X);
        if(flag){
            cout << X << endl;
            return 0;
        }
        X +=2;
    }

}

