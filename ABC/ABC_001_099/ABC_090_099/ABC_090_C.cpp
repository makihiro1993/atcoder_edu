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
    ll n,m;
    cin>>n>>m;
    ll N=min(n,m),M=max(n,m);

    if(N==1){
        ll ans;
        if(M==1) ans=1;
        else ans=max(0ll,M-2);
        cout << ans<< endl;
        return 0;
    }
    if(N==2){
        cout<< 0<< endl;
        return 0; 
    }

    cout <<(N-2)*(M-2)<<endl;

}