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
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    //最大公約数gcdを求める
    ll gcd_v = gcd(n,m);
    if(gcd_v==1){
        cout << n*m << endl;
        return 0;
    }
    //最小公倍数LCMを求める
    ll lcm_v = n*m/gcd_v;
    //各LCMで値が被らなければOK。

    ll v_max=max(n/lcm_v,m/lcm_v);




}