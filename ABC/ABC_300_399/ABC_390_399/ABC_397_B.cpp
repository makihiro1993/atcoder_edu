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
    ll ans=0;
    string stk;
    for(ll i=0;i<s.size();i++){
        char x=s[i];
        //スタックを考える
        stk+=x;
        if(stk=="io"){
            stk.clear();
            continue;
        }
        if(stk=="o"){
            ans++;//iを代入する必要がある。
            stk.clear();
        }
        if(stk=="ii"){
            ans++;//oを加える必要がある
            i--;//2個目のiは再度評価する
            stk.clear();
        }
    }
    if(stk=="i") ans++;
    cout<<ans<<endl;


}