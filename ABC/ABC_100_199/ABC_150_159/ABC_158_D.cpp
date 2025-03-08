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
    ll q;
    int t,f;
    char c;
    cin>>s;
    cin>>q;
    deque<char> dq(s.begin(), s.end());
    bool flag=false; //反転フラグ

    for(ll i=0;i<q;i++){
        cin>>t;
        if(t==1){
            flag = !flag;//値反転
        }
        if(t==2){
            cin>>f>>c;
            if(f==1){
                if(flag) dq.push_back(c);
                else dq.push_front(c);
            }
            if(f==2){
                if(flag) dq.push_front(c);
                else dq.push_back(c);
            }
        }
    }
    if(flag) reverse(dq.begin(),dq.end());
    string ans;
    for(ll i=0;i<dq.size();i++){
        ans +=dq[i];
    }
    cout << ans << endl;
}