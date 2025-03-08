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
    string s1,s2;
    cin>>s1>>s2;
    int ans;
    if(s1=="fine"&&s2=="fine"){
        ans=4;
    }
    if(s1=="sick"&&s2=="fine"){
        ans=2;
    }
    if(s1=="fine"&&s2=="sick"){
        ans=3;
    }
    if(s1=="sick"&&s2=="sick"){
        ans=1;
    }
    cout << ans << endl;


}