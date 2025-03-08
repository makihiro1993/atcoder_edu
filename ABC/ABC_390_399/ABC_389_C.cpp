#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;


int main(){
    ll Q;
    cin>>Q;
    ll type,x,minus;
    ll tot=0;
    deque<ll> ans={0};
    for(ll i=0;i<Q;i+=1){
        cin>>type;
        if(type==1){
            cin >> x;
            ans.push_back(x+ ans.back());
        }
        if(type==2){
            minus = ans[1]-tot;
            tot +=minus;
            ans.pop_front();
        }
        if(type==3){
            cin>>x;
            cout << ans[x-1]-tot<<endl;
        }
    }
}