#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    ll n,m;
    cin>>n>>m;
    ll k;
    vector<deque<ll>>vdq(m);
    for(ll i=0;i<m;i++){
        cin>>k;
        deque<ll> dq(k);
        for(ll j=0;j<k;j++) cin>>dq[j];
        vdq[i]=dq; 
    }
    //最初に各筒の先頭を抜き出す
    unordered_map<ll,ll> x; // 番号-index
    vector<pair<ll,ll>> dub; //重複
    for(ll i=0;i<m;i++){
        if(vdq[i].empty()) continue;
        if(x.count(vdq[i][0])){
            pair<ll,ll>temp_0={vdq[i][0],x[vdq[i][0]]};
            pair<ll,ll>temp_1={vdq[i][0],i};
            dub.push_back(temp_0);
            dub.push_back(temp_1);
        }
        else{
            x[vdq[i][0]]=i;
        }
    }
    vector<ll> v_index;

    while(true){
        //重複部分のdubが空orxがなくなったら終了
        if(dub.empty()||x.empty()){
            break;
        }
        //要素を削除
        v_index.clear();
        for(pair<ll,ll> p:dub){
            x.erase(p.first);
            vdq[p.second].pop_front();
            v_index.push_back(p.second);
        }
        dub.clear();//重複を初期化する
        //v_indexの番号のみ再度加える。
        for(ll idx:v_index){
            if(vdq[idx].empty()) continue;
            if(x.count(vdq[idx][0])){
                pair<ll,ll>temp_0={vdq[idx][0],x[vdq[idx][0]]};
                pair<ll,ll>temp_1={vdq[idx][0],idx};
                dub.push_back(temp_0);
                dub.push_back(temp_1);
            }
            else{
                x[vdq[idx][0]]=idx;
            }
        }
        
    }
    
    for(ll i=0;i<m;i++){
        if(! vdq[i].empty()){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes"<< endl;



}