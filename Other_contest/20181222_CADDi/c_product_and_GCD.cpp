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
    ll n,p;
    cin>>n>>p;
    if(n==1){
        cout << p << endl;
        return 0;
    }
    ll ans=1;
    ll lmt=static_cast<ll>(pow(p,1.0/n));
    lmt++;
    for(ll i=2;i<=lmt;i++){
        //if(lmt%i!=0) continue;
        ll value=static_cast<ll>(pow(i,n));
        if(value>p) break;
        ll mod=p%value;
        if(mod==0){
            ans=i;
        }

    }
    cout << ans << endl;
}