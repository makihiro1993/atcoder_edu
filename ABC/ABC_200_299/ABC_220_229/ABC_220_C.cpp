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
    vector<ll> A(N);
    for(ll i=0;i<N;i++) cin>>A[i];
    ll X;
    cin>>X;
    vector<ll> S(N+1,0);
    for(ll i=0;i<N;i++){
        S[i+1]=S[i]+A[i];
    }
    ll total_sum = S[S.size()-1];
    cout << total_sum << endl;
    ll num=X/total_sum;
    ll mod=X%total_sum;
    // あまりの値から二部探索を実施
    auto ite = upper_bound(S.begin(),S.end(),mod);
    ll idx = distance(S.begin(),ite);
    
    
    ll ans=num*N +idx;
    cout << ans << endl;
}