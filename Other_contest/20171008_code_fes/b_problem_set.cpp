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
    ll n,m,d,t;
    cin>>n;
    unordered_map<ll,ll> map_d;
    for(ll i=0;i<n;i++){
        cin>>d;
        if(map_d.count(d)){
            map_d[d]++;
        }
        else{
            map_d[d]=1;
        }
    }

    cin>>m;
    for(ll i=0;i<m;i++){
        cin>>t;
        if(map_d.count(t)){
            //cout <<t<<','<< map_d[t]<< endl;
            if(map_d[t]==0){
                cout << "NO" <<endl;
                return 0;
            }
            map_d[t]--;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

}