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
    vector<ll> p(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
        p[i]--; //0-index 
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        if(p[i]==i){
            swap(p[i],p[i+1]);
            ans++;
        } 
    }
    if(p[n-1]==n-1) ans++;

    cout << ans<< endl;
}