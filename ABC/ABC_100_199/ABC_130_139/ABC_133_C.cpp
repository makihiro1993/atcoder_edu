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
    ll L,R;
    cin>>L>>R;
    if(R-L>=2019){
        cout << 0 << endl;
        return 0;
    }
    ll ans =2019;
    for(ll i=L;i<=R-1;i+=1){
        for(ll j=i+1;j<=R;j+=1){
            ans = min(ans,i*j%2019);
        }
    }
    cout << ans << endl;
}