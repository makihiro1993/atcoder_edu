#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    //1の出現場所を記録する。
    vector<ll> v;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    if(v.size()==1){
        cout << 0 << endl;
        return 0;
    }
    if(v.size()==2){
        cout << v[1]-v[0]-1 <<endl;
        return 0;
    }
    //中心いちで計算を実施する
    ll mid = v.size()/2;
    ll p_std=v[mid]-mid;
    ll cnt =0;
    vector<ll> v_std(v.size(),0);
    for(ll i=0;i<v.size();i++){
        ll value = p_std+i;
        cnt +=abs(v[i]-value);
    }
    cout << cnt << endl;



}


