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
    ll k,a,b;
    cin>>k>>a>>b;
    //操作2,3を両方行うと2回の操作でB-A枚増やすことができる
    //B-A>=3でやる価値がある
    ll ans=1;
    //まず操作1をA-1回行なってビスケットの枚数をA枚にする
    ll kx = k-a+1;
    if(kx<=0){ //A枚まで増やせない場合
        ans+=k;
        cout << ans << endl;
        return 0;
    }
    ans = a;//今ビスケットはa枚
    if(b-a<=2){
        cout << 1+k<< endl;
        return 0;
    }
    ll x = kx/2, mod=kx%2;
    cout << ans+(b-a)*x+mod << endl;


}