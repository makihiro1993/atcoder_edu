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
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll cnt=0;
    ll x,mod;
    for(ll i=n-1;i>=0;i--){
        a[i]+=cnt;
        x=a[i]/b[i];
        mod=a[i]%b[i];
        if(mod>0){
            x++;
        }
        cnt+=(b[i]*x-a[i]);
    }
    cout << cnt << endl;

}