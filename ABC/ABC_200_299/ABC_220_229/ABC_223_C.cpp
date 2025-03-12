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
    ll n;
    cin>>n;
    vector<ll> a(n,0),b(n,0);
    vector<double> c(n,0.0);
    double total=0.0;
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=1.0*a[i]/b[i];
        //cout<<"Ci="<<c[i]<<endl;
        total +=c[i];
    }
    double half=total/2;
    //cout<<half<<endl;
    double ans=0;
    for(ll i=0;i<n;i++){
        if(half<c[i]){
            ans+=half*b[i];
            cout << fixed << setprecision(15) << ans << endl;
            return 0;
        }
        half-=c[i];
        ans+=a[i];
    }
}