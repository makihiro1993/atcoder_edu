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
    ll n,k,s;
    cin>>n>>k>>s;
    vector<ll> v(n,0);
    ll x;
    if(s<1e9){
        x=s+1;
    }
    else{
        x=1;
    }

    for(ll i=0;i<n;i++){
        if(i<k) v[i]=s;
        else v[i]=x;
    }

    for(ll i=0;i<n;i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}