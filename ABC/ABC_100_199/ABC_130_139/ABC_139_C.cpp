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
    ll n,h;
    cin>>n;
    ll x=0,cnt=0,cnt_max=0;
    for(ll i=0;i<n;i++){
        cin>>h;
        if(h>x){
            cnt_max=max(cnt_max,cnt);
            cnt=0;
        }
        else{
            cnt++;
        }
        x=h;
    }
    cnt_max=max(cnt_max,cnt);
    cout << cnt_max << endl;
}