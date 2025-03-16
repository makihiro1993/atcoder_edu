#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <list>
using namespace std;

using ll = long long;

int main(){
    ll n,k,a;
    cin>>n>>k;
    set<ll>se;
    for(ll i=0;i<n;i++){
        cin>>a;
        if(a<=k) se.insert(a);
    }
    vector<ll> v(se.begin(),se.end());
    ll ans = k*(k+1)/2;
    for(ll i=0;i<v.size();i++) ans-=v[i];

    cout<<ans<<endl;
}