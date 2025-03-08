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
    string s;
    ll k;
    cin>>s>>k;
    sort(s.begin(),s.end());

    for(ll i=0;i<k-1;i++){
        next_permutation(s.begin(),s.end());
    }
    cout << s<< endl;


}