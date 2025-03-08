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

ll gcd(ll a, ll b) {
  while (b != 0) {
    ll temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main(){
    ll n,t;
    cin>>n;
    ll ans=1;
    for(ll i=0;i<n;i++){
        cin>>t;
        ans=lcm(ans,t);
    }
    cout << ans << endl;

}