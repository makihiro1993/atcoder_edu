#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    int n;
    ll x,y;
    cin>>n;
    vector<pair<ll,ll>>vp(n);
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vp[i]={x,y};
    }
    sort(vp.begin(),vp.end());

    ll cnt=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            //x座標が異なる場合は合わない
            if(vp[i].first!=vp[j].first) continue;
            for(int k=j+1;k<n-1;k++){
                //y座標が異なる場合は合わない
                if(vp[i].second!=vp[k].second) continue;
                for(int l=k+1;l<n;l++){
                    if(vp[j].second!=vp[l].second||vp[k].first!=vp[l].first) continue;
                    cnt++;
                    //cout<<i<<j<<k<<l<<endl;
                    
                }
            }
        }
    }
    cout << cnt << endl;

}