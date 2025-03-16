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
    ll N;
    cin>>N;
    //3平方まで計算すれば良い
    ll x=static_cast<ll>(pow(N,0.3333333));
    x++;
    //cout<<x<<endl;
    ll ans=0;
    for(ll i=1;i<=x;i++){
        ll obj_x=N/i;
        //cout<<"obj_x="<<obj_x<<endl;
        for(ll j=i;j<=N;j++){
            ll temp=obj_x/j;
            temp-=(j-1);
            //cout<<temp<<endl;
            if(temp<=0)break;
            ans+=temp;
        }
    }
    cout<<ans<<endl;
}