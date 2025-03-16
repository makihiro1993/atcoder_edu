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
    ll n;
    cin>>n;
    vector<ll>a(n,0);
    for(ll i=0;i<n;i++)cin>>a[i];
    //種類を前と後ろで考える
    vector<ll> pre(n, 0), pri(n, 0);
    set<ll>s;
    for(ll i=0;i<n-1;i++){
        s.insert(a[i]);
        pre[i] = s.size();
    }
    s.clear();
    for(ll i=n-1;i>=0;i--){
        s.insert(a[i]);
        pri[i] = s.size();

    }
    ll ans=0;
    for (ll i=1;i<n;i++) {
        ans = max(ans, pre[i-1]+pri[i]);
    }
    cout<<ans<<endl;
}