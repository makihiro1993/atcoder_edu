#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;


int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n,0);
    for(ll i=0;i<n;i+=1){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll k;
    //距離mの最初の要素を見つける
    for(ll i=0;i<n;i+=1){
        if(v[i]>=v[0]+m){
            k=i-1;
            break;
        }
    }
    //for文でi=0から要素を捜査する
    for(ll i=0;i<n;i+=1){
        if(v[k+1]<v[i]+m){
            for(ll j=k+1;j<n;j+=1){
                if(v[j]>=v[i]+m){
                    k=j-1;
                    break;
                }
            }
        }
        ans = max(ans,k-i+1);
    }
    cout << ans << endl;
}