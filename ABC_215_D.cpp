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


vector<ll> out_primes(ll n){
    vector<ll> ans;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            n=n/i;
            ans.push_back(i);
        }
    }
    if(n>1) ans.push_back(n);
    return ans;
}


int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    set<ll> se;
    for(ll i=0;i<n;i++){
        vector<ll> primes=out_primes(a[i]);
        for(ll j=0;j<primes.size();j++){
            se.insert(primes[j]);
        }
    }
    //1〜mまでの集合を作成する
    set<ll>s;
    for(ll i=1;i<=m;i++){
        s.insert(i);
    }
    vector<ll> primes_tot(se.begin(),se.end());
    for(ll i=0;i<primes_tot.size();i++){
        ll x=m/primes_tot[i];
        for(ll j=primes_tot[i];j<=m;j+=primes_tot[i]){
            s.erase(j);
        }
    }
    vector<ll> ans(s.begin(),s.end());
    cout<< ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        cout << ans[i]<< endl;
    }

}