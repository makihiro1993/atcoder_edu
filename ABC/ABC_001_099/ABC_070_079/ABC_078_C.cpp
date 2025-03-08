#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    ll cnt_prob = static_cast<int>(pow(2,m));
    ll ans = (100*(n-m)+1900*m)*cnt_prob;
    cout << ans << endl;
}