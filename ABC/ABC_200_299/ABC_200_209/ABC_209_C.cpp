#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

int main() {
    ll N;
    cin>>N;
    vector<ll> v(N,0);
    for(ll i=0;i<N;i+=1){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans = 1;
    for(ll i=0;i<N;i+=1){
        ans = ans*max(0ll,(v[i]-i))%1000000007;
    }
    cout << ans << endl;

}