#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    ll n,m,x;
    ll mod = 1000000007;
    cin>>n>>m;
    vector<ll> a(n+1,1);
    for(ll i=0;i<m;i++){
        cin>>x;
        a[x]=0;
    }

    vector<ll> dp(n+1,0);
    dp[0]=1;
    if(a[1]==1){
        dp[1]=1;
    }

    for(ll i=0;i<=n-2;i++){
        dp[i+2]=dp[i+1]*a[i+1]+dp[i]*a[i];
        dp[i+2]%= mod;
    }
    cout << dp[n] << endl;

}