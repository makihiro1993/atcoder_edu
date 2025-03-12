#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    ll n,p;
    cin>>n;
    vector<ll> ans(n,0);
    for(ll i=0;i<n;i++){
        cin>>p;
        ans[p-1]=i+1;
    }
    for(ll i=0;i<n;i++){
        cout << ans[i] <<' ';
    }
    cout << endl;
}