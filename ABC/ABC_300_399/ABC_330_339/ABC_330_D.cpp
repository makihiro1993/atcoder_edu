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
    ll N;
    cin>>N;
    vector<string>s(N);
    for(ll i=0;i<N;i++){
        cin>>s[i];
    }
    //各x列に含まれる丸の数を取得する。
    vector<ll> cnt_x(N);
    for(ll i=0;i<N;i++){
        ll m=0;
        for(ll j=0;j<N;j++){
            if(s[i][j]=='o') m++;
        }
        cnt_x[i]=m-1;
    }
    //各y列に含まれる丸の数を取得する。
    vector<ll> cnt_y(N);
    for(ll j=0;j<N;j++){
        ll m=0;
        for(ll i=0;i<N;i++){
            if(s[i][j]=='o') m++;
        }
        cnt_y[j]=m-1;
    }
    //sort(vp.begin(),vp.end());
    ll cnt=0;
    for(ll i=0;i<N;i++){
        for(ll j=0;j<N;j++){
            if(s[i][j]=='o')cnt+=cnt_x[i]*cnt_y[i];
        }
    }
    cout<<cnt<<endl;
    
}