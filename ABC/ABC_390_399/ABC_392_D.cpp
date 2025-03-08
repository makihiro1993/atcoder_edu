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
    ll n,k,ak;
    cin>>n;
    vector<unordered_map<ll,ll>>v(n);
    //cout << n<< endl;
    for(ll i=0;i<n;i++){
        cin>>k;
        //cout << k<< endl;
        unordered_map<ll,ll> a;
        a[0]=k;
        for(ll j=0;j<k;j++){
            cin>>ak;
            if(a.count(ak)){
                a[ak]++;
            }
            else{
                a[ak]=1;
            }
        }
        v[i]=a;
    }

    double ans=0;
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            double temp=0;
            if(v[i].size()<v[j].size()){
                for(const auto&[key,value]:v[i]){
                    if (key != 0 && v[j].count(key)) {
                        temp += value * v[j][key];
                    }
                }
            }
            else{
                for (const auto& [key, value] : v[j]) {
                    if (key != 0 && v[i].count(key)) {
                        temp += value * v[i][key];
                    }
                }

            }
            temp /=(v[i][0]*v[j][0]);
            //cout <<"temp="<< temp << endl;
            ans = max(ans,temp);

        }
    }
    cout<<fixed<<setprecision(8)<<ans<<endl;


}