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
    ll x,y;
    cin>>x>>y;
    //ボタンaは値を+1,ボタンbは値反転
    ll ans = 1e10;

    if (y >= x) ans = min(ans, y - x);

    if (y >= -x) ans = min(ans, (y + x) + 1);

    if (-y >= x) ans = min(ans, (-y - x) + 1);

    if (-y >= -x) ans = min(ans, (-y + x) + 2);

    cout << ans << endl;
}