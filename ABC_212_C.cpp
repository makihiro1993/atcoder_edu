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
#include <stack>
using namespace std;

using ll = long long;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n,0),b(m,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans=1e10;
    for(ll i=0;i<n;i++){
        ll ai=a[i];
        ll right=0;
        ll left=m-1;
        while(true){
            if(right+1==left||right==left){
                break;
            }
            ll mid=(right+left)/2;
            if(ai<b[mid]) left=mid;
            else right=mid;
        }
        ll temp_ans=min(abs(b[right]-ai),abs(b[left]-ai));
        ans = min(ans,temp_ans);
    }
    cout << ans << endl;
}