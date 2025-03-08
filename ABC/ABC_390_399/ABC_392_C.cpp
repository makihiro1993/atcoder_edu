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
    vector<ll> p(n), q(n),s(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    for(ll i=0;i<n;i++){
        cin>>q[i];
    }

    for(ll i=0;i<n;i++){
        s[q[i]-1] = q[p[i]-1];
    }

    for(ll i=0;i<n;i++){
        cout << s[i] <<' ';
    }
    cout << endl;


}