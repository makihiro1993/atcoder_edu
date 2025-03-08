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
    ll n,a,b;
    cin>>n;
    //cout << n << endl;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        pair<ll,ll> x={b,a};
        v[i]=x;
    }
    //〆切時間順でソート
    sort(v.begin(),v.end());
    ll t=0;
    for(ll i=0;i<n;i++){
        t+=v[i].second;
        ll lmt = v[i].first;
        //cout << t << ',' << lmt << endl;
        if(t>lmt){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}