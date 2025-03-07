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
    ll n,a;
    cin>>n;
    unordered_map<ll,vector<ll>> una;
    for(ll i=0;i<n;i++){
        cin>>a;
        una[a].push_back(i);
    }
    ll temp_ans=1e6;
    for(auto const&[key,vec]:una){
        if(vec.size()==1) continue;
        for(ll i=0;i<vec.size()-1;i++){
            temp_ans=min(temp_ans,vec[i+1]-vec[i]+1);
        }
    }
    if(temp_ans==0){
        cout<< -1<<endl;
        return 0;
    }
    cout<<temp_ans<<endl;

}