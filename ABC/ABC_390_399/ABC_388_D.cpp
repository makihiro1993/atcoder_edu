#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

void move(vector<ll> &A,ll x){
    ll cnt=0;
    for(ll i=0;i <x;i+=1){
        if (A[i]>=1){
            A[i] -=1;
            cnt+=1;
        }
    }
    A[x] +=cnt;
}


int main(){
    ll N,A;
    cin>>N;
    vector<ll> a(N,0);
    for(int i=0;i<N;i+=1){
        cin>>a[i];
    }
    vector<ll> c(N,0);  //配列Cは累積影響を記述する
    vector<ll> d(N+1,0); //配列dは影響範囲を記述する
    for(ll i=0;i<N;i+=1){
        if(i>0){
            c[i] = c[i-1]+d[i]; //d[i]の中身を足し続ける。
            a[i] += c[i];//a[i]に足す。
        }

        ll cnt = min(a[i],N-1-i);
        a[i] -= cnt;
        d[i+1] +=1;  //次の項の影響範囲に1をたす
        d[i+cnt+1] -=1; //影響範囲から抜ける位置のものには-1を入れて範囲を打ち消す
    }
    for(ll i=0;i<N;i+=1){
        cout << a[i] << ' ';
    }
    cout << endl;

    
}    
