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

int main() {   
    ll N,Q;
    cin >> N>>Q;
    // box_to_label : i 番目の巣に入っているラベル鳩の番号
    // label_to_box : i 番目のラベル鳩が入っている巣の番号
    // pigeon_to_box : i 番目の鳩が入っている巣の番号
    vector<ll> box_to_label(N), label_to_box(N), pigeon_to_box(N);
    for(ll i=1;i<=N;i++){
        box_to_label[i]=i;
        label_to_box[i]=i;
        pigeon_to_box[i]=i;
    }
    for (ll i=0; i < Q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            ll pigeon, to;
            cin >> pigeon >> to;
            // 鳩 → 巣の情報を更新
            pigeon_to_box[pigeon] = label_to_box[to];
        } else if (type == 2) {
            ll label0, label1;
            cin >> label0 >> label1;
            // ラベル鳩 → 巣の情報を更新
            swap(label_to_box[label0], label_to_box[label1]);
            // 巣 → ラベル鳩の情報を更新
            swap(box_to_label[label_to_box[label0]], box_to_label[label_to_box[label1]]);
        } else {
            ll pigeon;
            cin >> pigeon;
            cout << box_to_label[pigeon_to_box[pigeon]] << endl;
        }
    }
}

int main(){
    ll N,Q;
    cin>>N>>Q;
    vector<ll> pg(N), lab(N),bla(N);
    for(ll i=1;i<=N;i++){
        pg[i]=i;  //鳩がどの巣にいるか？
        lab[i]=i;  //巣に書いてあるラベル
        bla[i]=i; //ラベルが書いてある箱
    }
    ll x,a,b;
    for(ll i=0;i<Q;i++){
        cin>>x;
        if(x==1){
            cin>>a>>b;
            pg[a]=lab[b];

        }
        if(x==2){

        }
        if(x==3){

        }

    }

}