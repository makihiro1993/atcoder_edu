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
    ll x;
    cin>>x;
    int n=2;
    while(true){
        ll ans = 1;
        for(int i=n;i>=1;i-=1){
            ans *=i;
        }
        if(ans==x){
            break;
        }
        else{
            n+=1;
        }
    }
    cout << n << endl;
}