#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;


int main(){
    ll R;
    cin>>R;
    ll cnt=1+4*(R-1);
    ll cnt_c = 0;
    ll j_init = R;
    for(ll i=1;i<R;i+=1){
        for(ll j=j_init;j>=1;j-=1){
            if(pow(2*i+1,2)+pow(2*j+1,2)<=4*pow(R,2)){
                cnt_c+=j;
                j_init = j;
                break;
            }

        }
    }
    cnt += 4*cnt_c;
    cout << cnt << endl;
}