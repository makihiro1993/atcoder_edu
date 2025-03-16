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
    ll q;
    cin>>q;
    //種類の累積和とmapで各ボールの番号を管理する
    ll s=0;
    unordered_map<ll,ll> umap;
    ll x,y;
    for(ll i=0;i<q;i++){
        cin>>x;
        if(x==1){
            cin>>y;
            umap[y]++;
            if(umap[y]==1)s++;
        }
        if(x==2){
            cin>>y;
            umap[y]--;
            if(umap[y]==0)s--;
        }
        if(x==3){
            cout<<s<<endl;
        }

    }
}