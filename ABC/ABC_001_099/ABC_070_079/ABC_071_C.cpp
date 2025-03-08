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
    ll n,a;
    cin>>n;
    map<ll,ll> d;
    for(ll i=0;i<n;i+=1){
        cin>>a;
        if(d.count(a)){
            d[a]++;
        }
        else{
            d[a]=1;
        }
    }
    
    vector<ll> v2;
    vector<ll> v4;
    for(auto &[key,value]:d){
        if(value==2||value==3){
            v2.push_back(key);
        }
        if(value>=4){
            v4.push_back(key);
        }
    }
    sort(v2.rbegin(),v2.rend());
    sort(v4.rbegin(),v4.rend());
    //作成できる面積パターンを考える
    ll ans = 0;
    if(v2.size()>=2){
        ans = max(ans,v2[0]*v2[1]);
        //cout << ans << endl;
    }
    if(v4.size()>=1){
        ans = max(ans,v4[0]*v4[0]);
    }
    if(v2.size()>=1&&v4.size()>=1){
        ans = max(ans,v2[0]*v4[0]);
    }
    cout << ans << endl;
    
}