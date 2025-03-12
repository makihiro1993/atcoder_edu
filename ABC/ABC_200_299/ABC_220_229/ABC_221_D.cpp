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
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({a+b,-1});
    }
    sort(v.begin(),v.end());

    vector<ll> ans(n+1,0);
    ll x=0;
    for(ll i=0;i<v.size()-1;i++){
        x+=v[i].second;
        //cout << v[i+1].first<<','<<v[i].first << endl;
        ans[x]+=((v[i+1].first)-(v[i].first));
    }
    for(ll i=1;i<ans.size();i++){
        cout<< ans[i] << ' ';
    }
    cout<<endl;

}