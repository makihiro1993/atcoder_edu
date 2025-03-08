#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    string s;
    cin>>s;
    ll n=s.size();
    //最後のDの位置を取得する
    ll loc_final_D=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='D'){
            loc_final_D=i;
        }
    }


    ll ans=0;
    
    bool flag=false;
    for(ll i=0;i<n;i++){
        if(s[i]=='U'){
            ans+=n-i-1; // i階よりも上層全てにいける
            if(i<loc_final_D){ //i階よりも上にDがあれば
                ans +=2*i;
            }
        
            flag=true;
        }
        if(s[i]=='D'){
            ans+=i;//i階よりも下層全てにいける
            if(flag){
                ans += 2*(n-i-1);
            }
        }
    }
    cout << ans << endl;
}