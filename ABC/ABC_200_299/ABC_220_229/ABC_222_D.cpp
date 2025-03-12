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
    vector<ll> a(n,0),b(n,0);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    //DPを実装する
    ll b_max=b[n-1];
    vector<vector<ll>> dp(n,vector<ll>(b_max+1,0));
    for(ll i=a[0];i<=b[0];i++){
        dp[0][i]++;
    }
    //cout<<dp[0][2]<<endl;
    for(ll i=0;i<n-1;i++){
        //累積和で代用できる
        ll S=0;
        for(ll j=0;j<=b[i+1];j++){
            S+=dp[i][j];
            if(j>=a[i+1]){
                dp[i+1][j]=S;
                dp[i+1][j]%=998244353;
            }
            else{
                dp[i+1][j]=0;
            }
        }

    }
    ll ans=0;
    for(ll i=0;i<=b_max;i++){
        ans+=dp[n-1][i];
        ans%=998244353;
    }
    
    cout << ans<<endl;


}