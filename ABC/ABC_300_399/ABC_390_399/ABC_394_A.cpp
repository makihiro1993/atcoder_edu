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
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2'){
            ans+='2';
        }
    }
    cout << ans << endl;

}