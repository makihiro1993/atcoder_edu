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
    ll n,m,a,b;
    cin>>n>>m;
    unordered_map<ll,vector<ll>> d;
    for(ll i=0;i<m;i++){
        cin>>a>>b;
        if(d.count(a)){
            d[a].push_back(b);
        }
        else{
            vector<ll> v={b};
            d[a]=v;
        }
        if(d.count(b)){
            d[b].push_back(a);
        }
        else{
            vector<ll> v={a};
            d[b]=v;
        }
        
        
    }
    //島1から行ける先
    vector<ll> v_obj = d[1];
    //直行便があるならそれでOK
    if(find(v_obj.begin(),v_obj.end(),n)!=v_obj.end()){
        cout << "POSSIBLE" <<endl;
        return 0;
    }
    //経由する場合
    for(ll i=0;i<v_obj.size();i++){
        ll node_imm = v_obj[i];
        vector<ll> v=d[node_imm];
        if(find(v.begin(),v.end(),n)!=v.end()){
            cout << "POSSIBLE" <<endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}