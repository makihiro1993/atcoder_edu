#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    ll N,a;
    cin>>N;
    //奇数の数と2の倍数の数、4の倍数の数で分ける。
    ll cnt_o=0;
    ll cnt_e=0;
    ll cnt_f=0;
    for(ll i=0;i<N;i+=1){
        cin>> a;
        if(a%4==0){
            cnt_f+=1;
        }
        else{
            if(a%2==0){
                cnt_e+=1;
            }
            else{
                cnt_o+=1;
            }
        }
    }
    bool flag = false;
    if(N%2==0){
        if(cnt_f>=cnt_o) flag = true;
    }
    else{
        if(cnt_f>=cnt_o-1) flag = true;
    }
    
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" <<endl;
    }

}    
