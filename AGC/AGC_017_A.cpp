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

ll comb(ll n,ll r){
    if(r==0){
        return 1;
    }
    ll ans=1;
    for(ll i=0;i<r;i++){
        ans=ans*(n-i)/(i+1);
    }
    return ans;
}




int main(){
    int N,P,A;
    cin>>N>>P;
    ll cnt_even=0,cnt_odd=0;
    for(int i=0;i<N;i++){
        cin>>A;
        if(A%2==1){
            cnt_odd++;
        }
        else{
            cnt_even++;
        }
    }

    ll x=cnt_odd/2;
    vector<ll> v_odd;
    for(ll i=0;i<=x;i++){
        v_odd.push_back(comb(cnt_odd,2*i+P));
    }

    ll ptn_even=0;
    for(ll i=0;i<=cnt_even;i++){
        ptn_even+=comb(cnt_even,i);
    }

    ll ptn_total=0;
    for(ll i=0;i<=x;i++){
        ptn_total +=ptn_even*v_odd[i];
    }
    cout << ptn_total << endl;

    

}