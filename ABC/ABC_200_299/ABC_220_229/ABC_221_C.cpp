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

ll cal(vector<int> x1,vector<int> x2){
    ll num1=0,num2=0;
    for(int i=0;i<x1.size();i++){
        num1 +=static_cast<ll>(pow(10,x1.size()-1-i))*x1[i];
    }
    for(int i=0;i<x2.size();i++){
        num2 +=static_cast<ll>(pow(10,x2.size()-1-i))*x2[i];
    }
    return num1*num2;
}



int main(){
    string n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n.size();i++){
        a.push_back(int(n[i]-'0'));
    }
    //大きい順にソート
    sort(a.rbegin(),a.rend());
    vector<vector<int>> v(2);
    //最初の2つはvに分ける
    v[0].push_back(a[0]);
    v[1].push_back(a[1]);
    //残りは積の大きい方に分ける
    for(int i=2;i<a.size();i++){
        vector<vector<int>>temp1=v,temp2=v;
        temp1[0].push_back(a[i]);
        temp2[1].push_back(a[i]);
        ll ans1 =cal(temp1[0],temp1[1]);
        ll ans2 =cal(temp2[0],temp2[1]);
        //cout << ans1<<',' << ans2 <<endl;
        if(ans1>=ans2) v= temp1;
        else v=temp2;
    }
    ll ans = cal(v[0],v[1]);
    cout << ans<< endl;
}