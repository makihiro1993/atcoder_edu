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
    ll n,k;
    cin>>n>>k;
    ll r,s,p;
    cin>>r>>s>>p;
    string t;
    cin>>t;
    //k文字飛ばしの文字列にする
    vector<string>v(k);
    for(ll i=0;i<n;i++){
        ll num=i%k;
        v[num]+=t[i];
    }
    //k文字飛ばしの文字列は隣あわなければ良い
    vector<string> vm(k);
    for(ll i=0;i<k;i++){
        v[i]+='x'; //最後にx文字を追加する。
        char init = v[i][0];
        ll num=1;
        for(ll j=1;j<v[i].size();j++){
            if(v[i][j]==init){
                num++;
            }
            else{
                ll num_inp=1+(num-1)/2;
                //cout << num<< endl;
                for(ll k=0;k<num_inp;k++) vm[i]+=init;
                //vm[i] +=init*num_inp;
                init=v[i][j];
                num=1;
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<vm.size();i++){
        //cout << vm[i] << endl;
        for(ll j=0;j<vm[i].size();j++){
            if(vm[i][j]=='r') ans+=p;
            if(vm[i][j]=='s') ans+=r;
            if(vm[i][j]=='p') ans+=s;
        }
    }
    cout << ans << endl;


}