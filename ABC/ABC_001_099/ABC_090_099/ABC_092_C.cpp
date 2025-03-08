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
    ll N;
    cin>>N;
    vector<ll> v(N,0);
    for(ll i=0;i<N;i++){
        cin>>v[i];
    }
    v.insert(v.begin(),0);
    v.push_back(0);
    //元々の経路の総和を求める。
    ll ans=0;
    for(ll i=1;i<v.size();i++){
        ans+=abs(v[i]-v[i-1]);
    }

    const ll ans_base = ans;

    for(ll i=1;i<v.size()-1;i++){
        if((v[i]-v[i-1])*(v[i+1]-v[i])<0){
            cout << ans_base -abs(v[i]-v[i-1])-abs(v[i]-v[i+1])+abs(v[i-1]-v[i+1]) <<endl;
        }
        else{
            cout << ans_base << endl;
        }
        
    }
}