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
    ll N;
    cin>>N;
    vector<ll> L(N,0),R(N,0);
    ll s=0;
    for(ll i=0;i<N;i++){
        cin>>L[i]>>R[i];
        s+=L[i];
    }
    if(s>0){
        cout<<"No"<<endl;
        return 0;
    }
    //cout<<s<<endl;
    //sを0に持っていく。イテレータごとにLをRの値にして足していく。
    bool flag=false;
    for(ll i=0;i<N;i++){
        ll diff=R[i]-L[i];
        if(s+diff>=0){
            L[i]+=abs(s);
            flag=true;
            break;
        }
        L[i]=R[i];
        s+=diff;
    }
    if(flag){
        cout<<"Yes"<<endl;
        for(ll i=0;i<N;i++){
            cout<<L[i]<<' ';
        }
        cout<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}