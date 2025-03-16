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
    ll N;
    cin>>N;
    ll s=0;
    ll s2=0;
    vector<ll>a(N,0);
    for(ll i=0;i<N;i++){
        cin>>a[i];
        s+=a[i];
        s2+=a[i]*a[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    for(ll i=0;i<N;i++){
        s2-=a[i]*a[i];
        s-=a[i];
        ans+=s2;
        ans-=2*s*a[i];
        ans+=a[i]*a[i]*(N-1-i);  
    }
    cout<<ans<<endl;

    
}