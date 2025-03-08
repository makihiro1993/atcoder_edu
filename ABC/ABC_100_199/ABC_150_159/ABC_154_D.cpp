#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll=long long;

double ev_dice(ll n){
    double ev = (n+1)/2.0;
    //cout << n<<','<< ev << endl;
    return ev;
}



int main(){
    ll N,K,p;
    cin >> N>>K;
    vector<double> ve;
    for(ll i=0;i<N;i+=1){
        cin>>p;
        //cout << p << endl;
        double ev_p = ev_dice(p);
        ve.push_back(ev_p);
    }
    double max = 0.0;
    for(ll j=0;j<K;j+=1){
        max +=ve[j];
    }
    double value_old = max;
    for(ll i=0;i<N-K;i+=1){
        double value_new = value_old-ve[i]+ve[K+i];
        //cout << value_old<<','<<ve[i]<<','<<ve[K+i] <<endl;
        if(value_new>max){
            max = value_new;
        }
        value_old = value_new;
    }
    cout << fixed<< setprecision(9);
    cout<<max << endl;
}

