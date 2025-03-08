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
    ll n,m,u,v;
    cin>>n>>m;
    set<pair<ll,ll>>se;
    ll ans=0;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        pair<ll,ll> x,y;
        if(u==v){
            ans++;
            continue;
        }
        x={u,v},y={v,u};
        if(se.count(x)||se.count(y)){
            ans++;
        }
        else{
            se.insert(x);
            se.insert(y);
        }
        
    }
    cout << ans << endl;

}