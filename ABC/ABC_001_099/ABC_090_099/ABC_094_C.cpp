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
    for(ll i=0;i<N;i+=1){
        cin>>v[i];
    }
    
    vector<ll> vc=v;
    sort(vc.begin(),vc.end());
    vector<ll> ans={vc[N/2-1],vc[N/2]};
    
    for(ll i=0;i<N;i+=1){
        if(v[i]<=ans[0]){
            cout<< ans[1] << endl;
        }
        else{
            cout << ans[0] << endl;
        }
    }
    
}