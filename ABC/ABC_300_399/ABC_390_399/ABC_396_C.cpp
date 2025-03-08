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
    ll N,M;
    cin>>N>>M;
    vector<ll> b(N),w(M);
    for(ll i=0;i<N;i++) cin>>b[i];
    for(ll i=0;i<M;i++) cin>>w[i];
    //ソートを実施して大きい順にする
    sort(b.rbegin(),b.rend());
    sort(w.rbegin(),w.rend());
    //i番目までの総和
    vector<ll> sum_b(N+1),sum_w(M+1);
    for(ll i=0;i<N;i++){
        sum_b[i+1] = b[i]+sum_b[i];
    }
    for(ll i=0;i<M;i++){
        sum_w[i+1] = max(sum_w[i],w[i]+sum_w[i]);
    }
    
    ll ans_sum=-1e9;
    for(ll i=0;i<N+1;i++){
        ans_sum = max(ans_sum,sum_b[i]+sum_w[min(i,M)]);
    }
    cout << ans_sum << endl;

    
}