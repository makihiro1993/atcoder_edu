#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    //1番目の人をリーダーとした際の値を初期値とする
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if(s[i]=='E'){
            cnt++;
        }
    }
    ll cnt_min=cnt;
    for(ll i=1;i<n;i++){
        if(s[i-1]=='W'){
            cnt++;
        }
        if(s[i]=='E'){
            cnt--;
        }
        //cout << cnt << endl;
        cnt_min = min(cnt_min,cnt);
    }
    cout << cnt_min << endl;
}