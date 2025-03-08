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
    ll q;
    cin>>q;
    //入れた値と総和
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<ll> ans;
    ll a,x;
    ll s=0;
    for(ll i=0;i<q;i++){
        cin>>a;
        if(a==1){
            cin>>x;
            pq.push(x-s);
        }
        if(a==2){
            cin>>x;
            s+=x;
        }
        if(a==3){
            ll temp_value=pq.top()+s;
            pq.pop();
            ans.push_back(temp_value);
        }
    }
    for(ll i=0;i<ans.size();i++){
        cout << ans[i]<<endl;
    }

}