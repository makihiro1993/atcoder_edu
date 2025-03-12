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
    ll a,b;
    vector<pair<ll,ll>>p(n);
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        p[i]={a,b};
    }
    ll cnt=0;
    //set<set<ll>> se;
    for(ll i=0;i<n-2;i++){
        for(ll j=i+1;j<n-1;j++){
            for(ll k=j+1;k<n;k++){
                //set<ll> temp_se={i,j,k};
                //if(se.count(temp_se)) continue;
                ll dx1=p[j].first-p[i].first;
                ll dy1=p[j].second-p[i].second;
                ll dx2=p[k].first-p[i].first;
                ll dy2=p[k].second-p[i].second;
                if(dx1*dy2 != dx2*dy1)cnt++;
                //se.insert(temp_se);
            }
        }
    }
    cout<<cnt<<endl;
}