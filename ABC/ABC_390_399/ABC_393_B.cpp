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
    //ABCの出現位置をメモする。
    vector<int>a,c;
    set<int>b;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') a.push_back(i);
        if(s[i]=='B') b.insert(i);
        if(s[i]=='C') c.push_back(i);
    }
    ll ans=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<c.size();j++){
            if(c[j]<a[i]) continue;
            if((a[i]+c[j])%2!=0) continue;
            int value=(a[i]+c[j])/2;
            if(b.count(value)){
                ans++;
            }
        }
    }




    cout << ans << endl;

}