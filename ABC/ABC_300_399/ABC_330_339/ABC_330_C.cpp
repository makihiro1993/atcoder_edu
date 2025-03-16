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
    ll N;
    cin>>N;
    ll x,y;
    x = static_cast<ll>(pow(N,0.5));
    y=0;
    ll x_end=x/2;
    ll s=N;
    while(x>x/2-1){
        ll s_temp=x*x+y*y-N;
        if(s_temp>0){
            x--;
        }
        if(s_temp<0){
            y++;
        }
        if(s_temp==0){
            cout<<0<<endl;
            return 0;
        }
        s=min(s,abs(s_temp));
    }
    cout<<s<<endl;
}