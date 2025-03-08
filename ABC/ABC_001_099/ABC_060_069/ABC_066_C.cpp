#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n,0),b(n,0);
    for(ll i=0;i<n;i+=1){
        cin>>a[i];
    }
    ll start =0;
    ll end = n-1;
    ll i= n-1;
    while(i>=0){
        b[start]= a[i];
        start +=1;
        i-=1;
        if(i<0){
          break;
        }
        b[end] = a[i];
        end -=1;
        i-=1;
    }
    for(ll i=0;i<n;i+=1){
      if(i==n-1){
            cout<< b[n-1]<<endl;
            return 0;
        }
        cout << b[i] << ' ';
        
        
    }
    
}