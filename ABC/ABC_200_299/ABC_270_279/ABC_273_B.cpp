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

void print_vec(vector<ll> &v){
    for(ll i=0;i<15;i++){
        cout<<v[i]<<',';
      }
      cout<<endl;
}

int main(){
    string x;
    ll k;
    cin>>x>>k;
    //各桁を抽出する
    vector<ll> v(16,0);
    ll length=x.size();
    for(ll i=0;i<length;i++){
        ll xi=ll(x[i]-'0');
        v[15-length+i+1]=xi;
    }
    for(ll i=15;i>=16-k;i--){
        if(v[i]<5) v[i]=0;//切り下げ処理
        else{//切り上げ処理
            v[i]=0;
            for(ll j=i-1;j>=0;j--){
                if(v[j]+1==10){
                    v[j]=0;
                }
                else{
                    v[j]++;
                    break;
                }
            }
        }
        //print_vec(v);
    }
    bool flag=false;
    for(ll i=0;i<16;i++){
        if(v[i]!=0){
            flag=true;
        }
        if(flag){
            cout<<v[i];
        }
    }
    if(flag==false){
        cout<<0<<endl;
        return 0;
    }
    cout<<endl;

}