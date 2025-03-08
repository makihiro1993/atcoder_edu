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
    string s;
    cin>>s;
    //abcの出現回数を調べる
    vector<ll> v(3,0);
    for(ll i=0;i<s.size();i++){
        if(s[i]=='a')v[0]++;
        if(s[i]=='b')v[1]++;
        if(s[i]=='c')v[2]++;
    }
    sort(v.begin(),v.end());
    if(v[2]-v[0]<=1){
        cout << "YES" << endl;
        return 0;
    }
    cout<< "NO" << endl;
}