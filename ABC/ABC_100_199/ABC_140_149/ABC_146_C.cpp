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

ll num_digits(ll value) {
    if (value == 0) return 1;
    return (ll)log10(value) + 1;
}

bool jud(ll a,ll b,ll n,ll x){
    ll value=a*n+b*num_digits(n);
    if(value<=x) return true;
    else return false;
}


int main(){
    ll a,b,x;
    cin>>a>>b>>x;
    
    ll left=0,right=1e9;
    ll mid;
    ll ans=0;

    while(left<=right){
        mid = (left+right)/2;
        bool flag = jud(a,b,mid,x);
        if(flag){
            left = mid+1;
            ans=mid;
        }
        else{
            right=mid-1;
        }
    }
    cout << ans << endl;


}