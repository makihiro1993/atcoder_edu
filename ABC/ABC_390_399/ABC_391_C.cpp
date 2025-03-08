#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
using namespace std;

using ll = long long;

int main(){
    ll N,Q;
    int x,p,h;
    cin>>N>>Q;

    vector<ll> a(N,0);
    map<ll, ll> f;
    ll dup=0;
    for(ll i=0;i<N;i++){
        a[i]=i+1;
        f[a[i]]=1;
    }

    for(ll i=0;i<Q;i++){
        cin>>x;
        //cout << x << endl;
        if(x==1){
            cin>>p>>h;
            ll v1=a[p-1];
            ll v2=h;
            if(f[v1]==2){
                dup--;
            }
            f[v1]--;
            if(f[v2]==1){
                dup++;
            }
            f[v2]++;
            

            a[p-1]=v2;
        }
        else{
            cout << dup << endl;
            
        }

    }
}