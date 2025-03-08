#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;


int main(){
    ll n,x;
    cin>>n;
    //律速を考える
    ll s=1e15,k=0;
    for(int i=0;i<5;i++){
        cin>>x;
        if(x<s){
            s=x;
            k=i;
        }
    }
    //律速過程が全員を輸送するのに必要な時間
    ll t = 1+(n-1)/s;
    t+=4;

    cout << t << endl;
}