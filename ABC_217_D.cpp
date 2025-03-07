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
    ll l,q;
    cin>>l>>q;
    ll c,x;
    set<ll>se={0,l};
    for(ll i=0;i<q;i++){
        cin>>c>>x;
        if(c==1){
            se.insert(x);
        }
        if(c==2){
            auto index = se.lower_bound(x);
            ll x1= *index;
            index--;
            ll x2 = *index;
            cout << x1 - x2 << endl;
        }

    }


}