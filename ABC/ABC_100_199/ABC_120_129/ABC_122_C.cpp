#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    ll N,Q;
    cin>>N>>Q;
    string S;
    cin>>S;
    vector<ll> a;//acの場所を記録
    vector<ll> c;
    for(ll i=0;i<N-1;i++){
        if(S[i]=='A'&&S[i+1]=='C'){
            a.push_back(i+1);
            c.push_back(i+2);
        }
    }
    ll max_v = c.size();
    ll l,r;
    for(ll i=0;i<Q;i++){
        cin>>l>>r;
        //r位置までに含まれるACの数を調べる
        auto itr=upper_bound(c.begin(),c.end(),r);
        ll index_r=itr-c.begin();
        index_r=min(index_r,max_v);
        //l位置までに含まれるACの数を調べる
        auto it=upper_bound(a.begin(),a.end(),l-1);
        ll index_l=it-a.begin();
        
        cout << index_r-index_l << endl;


    }

}