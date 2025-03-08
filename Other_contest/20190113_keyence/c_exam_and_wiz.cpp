#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n),c(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    ll diff_tot=0,diff_minus=0;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll temp_diff = a[i]-b[i];
        diff_tot +=(temp_diff);
        c[i]=temp_diff;
        if(temp_diff<0){
            cnt++;
            diff_minus+=temp_diff;
        }
    }
    if(diff_tot<0){
        cout << -1 << endl;
        return 0;
    }
    ll cnt_add=0;
    sort(c.rbegin(),c.rend());//大きい順にソート;
    for(ll i=0;i<n;i++){
        if(diff_minus>=0){
            break;
        }
        cnt_add++;
        diff_minus +=c[i];
    }
    cnt+=cnt_add;

    cout << cnt << endl;


}