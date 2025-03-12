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

pair<int,int> GCP(char x1,char x2){
    pair<int,int> y={0,0};
    if(x1==x2)return y;
    if(x1=='P'){
        if(x2=='G')y.first++;
        else y.second++;
        return y;
    }
    if(x1=='G'){
        if(x2=='C')y.first++;
        else y.second++;
        return y;
    }
    if(x1=='C'){
        if(x2=='P')y.first++;
        else y.second++;
        return y;
    }  
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(2*n,vector<char>(m));
    for(ll i=0;i<2*n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<pair<ll,ll>> ans(2*n);
    for(int i=0;i<2*n;i++){
        ans[i]={0,i};  //f勝利数,s番号
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char x1= a[ans[2*j].second][i];
            char x2= a[ans[1+2*j].second][i];
            pair<int,int> result = GCP(x1,x2);
            ans[2*j].first += result.first;
            ans[1+2*j].first += result.second;
        }
        sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first != b.first) return a.first > b.first; // first を降順
            return a.second < b.second; // first が同じなら second を昇順
        });
        //sort(ans.rbegin(),ans.rend());
    }
    for(int i=0;i<2*n;i++){
        cout << ans[i].second +1<<endl;
    }
}