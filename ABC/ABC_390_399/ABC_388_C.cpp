#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll N,A;
    cin>>N;
    vector<ll> v_A(N,0);
    for(int i=0;i<N;i+=1){
        cin>>A;
        v_A[i] = A;
    }
    ll cnt=0;
    ll j_st = 0;
    for(ll i=0;i<N-1;i+=1){
        ll obj = 2*v_A[i];
        auto ite = lower_bound(v_A.begin()+i+1,v_A.end(), obj);
        cnt += v_A.end() -ite;

    }
    cout << cnt << endl;
}    
