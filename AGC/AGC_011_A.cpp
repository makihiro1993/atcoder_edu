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
    ll n,c,k;
    cin>>n>>c>>k;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        //b[i]=a[i]+k;
    }
    sort(a.begin(),a.end());
    //ll max_v = a[n-1];
    //a.push_back(max_v+c+1);
    ll ans=1;
    ll lmt=a[0]+k;
    ll std = 0;
    for(ll i=1;i<n;i++){
        if(i>std+c-1 || a[i]>lmt){
            ans++;
            lmt=a[i]+k;
            //cout << lmt << endl;
            std=i;
        }

    }
    cout << ans<< endl;
}