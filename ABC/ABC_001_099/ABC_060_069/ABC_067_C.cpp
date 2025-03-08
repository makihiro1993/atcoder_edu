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
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        tot +=a[i];
    }
    ll ans=tot;
    ll inc=0;
    ll cnt=0;

    vector<ll> abs_v(n-1);

    for(ll i=0;i<n-1;i++){
        tot -=a[i];
        inc +=a[i];
        //cout << tot << ',' << inc << endl;
        abs_v[i]=abs(tot-inc);
    }
    cout << *min_element(abs_v.begin(),abs_v.end()) << endl;
}