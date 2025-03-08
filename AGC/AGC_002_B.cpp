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
    ll n,m,x,y;
    cin>>n>>m;
    //個数と確率をそれぞれ管理する
    vector<int> v_pcs(n,1);
    vector<bool> v_bools(n,false);
    v_bools[0]=true;//0番目の箱に赤玉が入っている。
    for(ll i=0;i<m;i++){
        cin>>x>>y;
        x--,y--;  //0-indexに変更する
        if(v_bools[x]) v_bools[y]=true;
        v_pcs[x]--;
        if(v_pcs[x]==0){
            v_bools[x]=false;
        }
        v_pcs[y]++;
    }

    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(v_bools[i]){
            cnt++;
        }
    }
    cout << cnt << endl;



}