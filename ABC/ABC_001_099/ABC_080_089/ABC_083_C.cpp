#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <list>
using namespace std;

using ll = long long;

int main(){
    ll x,y;
    cin>>x>>y;
    ll f=y/x;
    ll e=log2(f);
    //確認。何らかのfloat誤差の影響を見るため。
    ll add;
    ll value=x*static_cast<ll>(pow(2,e));
    if(value<=y) add=1;
    else add=0;
    //cout<<value<<endl;
    cout<<e+add<<endl;

}