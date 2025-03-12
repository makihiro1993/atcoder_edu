#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> s(n,0),t(n,0),ans(n,0);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    for(ll i=0;i<n;i++){
        cin>>t[i];
    }
    //一番最初に宝石をもらう人を基準にする
    ll value=*min_element(t.begin(),t.end());
    auto ite=find(t.begin(),t.end(),value);
    ll index = distance(t.begin(),ite);

    // sとtを回転させる
    rotate(s.begin(), s.begin() + index, s.end());
    rotate(t.begin(), t.begin() + index, t.end());
    ans[0]=t[0];
    for(ll i=0;i<n-1;i++){
        ans[i+1]=min(ans[i]+s[i],t[i+1]);
    }
    rotate(ans.begin(),ans.end()-index,ans.end());
    for(ll i=0;i<n;i++){
        cout <<ans[i]<<endl;
    }
}