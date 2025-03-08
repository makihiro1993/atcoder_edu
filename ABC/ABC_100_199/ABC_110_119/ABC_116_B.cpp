#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

using ll=long long;

ll collatz(ll n){
    if(n%2==0) return n/2;
    else return 3*n+1;
}

int main(){
    ll n;
    cin>>n;
    set<ll> se={n};
    ll cnt = 0;
    while(true){
        n = collatz(n);
        //cout << n << endl;
        cnt +=1;
        if(se.count(n)){
            break;
        }
        else{
            se.insert(n);
        }
    }
    cout << cnt+1 << endl;

}

