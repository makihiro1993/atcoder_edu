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
    int n,x,y;
    cin>>n;
    cin>>x>>y;
    int a,b;
    int sum_a=0,sum_b=0;
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vp[i]={a,b};
        sum_a+=a,sum_b+=b;
    }
    if(sum_a<x||sum_b<y){
        cout <<-1 << endl;
        return 0;
    }
    sort(vp.begin(),vp.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(sum_a-vp[i].first >=x&&sum_b-vp[i].second >=x){
            sum_a-=vp[i].first;
            sum_b-=vp[i].second;
            cnt++;
        }
    }
    cout << n-cnt << endl;
}