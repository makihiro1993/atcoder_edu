#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;


void print_vec(vector<ll> vec){
    for(int i=0;i<vec.size();i+=1){
        cout << vec[i] << ',';
    }
    cout << endl;
}

int main(){
    ll N,M;
    cin>>N>>M;
    vector<ll> v(M,0);
    for(int i=0;i<M;i+=1){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    if (M <= N) {
        cout << 0 << endl;
        return 0;
    }
    
    //隙間の距離を記録する
    vector<ll> s(M-1,0);
    for(int i=0;i<M-1;i+=1){
        s[i] = v[i+1]-v[i];
    }
    //大きい順にソートする。
    sort(s.begin(), s.end(), greater<ll>());

     //総距離を計算する。
    ll total_gap = v[M - 1] - v[0]; // 全体の距離
    ll largest_gaps = accumulate(s.begin(), s.begin() + (N - 1), 0LL);

    cout << total_gap - largest_gaps << endl;
    
}