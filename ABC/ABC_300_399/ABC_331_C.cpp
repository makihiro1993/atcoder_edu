#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;


int main(){
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    set<ll> se;
    for(ll i=0;i<n;i+=1){
        cin>>v[i];
        se.insert(v[i]);
    }

    ll max = *max_element(v.begin(),v.end());
    vector<ll> m(max+1,0);//総和の値
    vector<ll> f(se.size(),0); //値の出現回数
    //各値の出現回数
    vector<ll> vec(se.begin(),se.end());
    for(ll i=0;i<n;i+=1){
        auto ite= lower_bound(vec.begin(),vec.end(),v[i]);
        //auto ite =find(se.begin(),se.end(),v[i]);
        ll index = distance(vec.begin(),ite);
        f[index] +=1;
    }
    
    ll cnt=0;
    
    for(ll i=se.size()-1;i>=0;i-=1){
        m[vec[i]] = cnt;
        cnt += vec[i]*f[i];
    }
    for(ll i=0;i<n;i+=1){
        cout << m[v[i]] << ' ';
    }
    cout << endl;

}