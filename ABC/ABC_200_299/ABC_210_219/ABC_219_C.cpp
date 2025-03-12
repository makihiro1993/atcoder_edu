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
    string x,s;
    cin>>x;
    string alp ="abcdefghijklmnopqrstuvwxyz";
    ll n;
    cin>>n;
    unordered_map<char,char> um;
    for(int i=0;i<x.size();i++){
        um[x[i]]=alp[i];
    }
    vector<pair<string,string>> vp(n);
    for(ll i=0;i<n;i++){
        cin>>s;
        string s_alp;
        for(int i=0;i<s.size();i++){
            s_alp +=um[s[i]]; //アルファベット順に変換
        }
        vp[i]={s_alp,s};
    }
    sort(vp.begin(),vp.end());
    for(auto &x:vp){
        cout<< x.second << endl;
    }


}