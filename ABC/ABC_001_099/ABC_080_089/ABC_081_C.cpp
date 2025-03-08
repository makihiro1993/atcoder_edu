#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

using ll=long long;

int main(){
    ll N,K,A;
    cin >> N>>K;
    set<ll> se;
    vector<ll> vec(N,0);
    for(int i=0;i<N;i+=1){
        cin >> A;
        vec[A-1] +=1;
    }
    sort(vec.begin(),vec.end());

    ll ans = 0;
    for(ll i=0;i<(N-K);i+=1){
        ans += vec[i];
    }
    cout << ans << endl;
}

