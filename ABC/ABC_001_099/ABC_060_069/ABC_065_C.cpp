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

ll cal(ll x){
    ll ans=1;
    for(ll i=1;i<=x;i++){
        ans *=i;
        ans = ans%1000000007;
    }
    return ans;
}



int main(){
    ll n,m;
    cin>>n>>m;
    ll N=min(n,m),M=max(n,m);
    
    if(abs(N-M)>=2){
        cout << 0<< endl;
        return 0;
    }
    if(N==M){
        ll ans_N=cal(N);
        ll ans_M=cal(M);
        ll answer = 2*ans_N*ans_M;
        ll ans = answer%1000000007;
        cout << ans << endl;
        return 0;
    }
    ll ans_N=cal(N);
    ll ans_M=cal(M);
    ll answer = ans_N*ans_M;
    ll ans = answer%1000000007;
    cout << ans << endl;
}