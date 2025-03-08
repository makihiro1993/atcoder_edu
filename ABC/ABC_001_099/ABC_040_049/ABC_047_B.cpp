#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    string s;
    cin>>s;
    char x=s[0];
    ll cnt=0;
    vector<char>a;
    for(ll i=1;i<s.size();i++){
        if(s[i]!=x){
            cnt+=1;
            x=s[i];
        }
    }
    cout << cnt << endl;
}