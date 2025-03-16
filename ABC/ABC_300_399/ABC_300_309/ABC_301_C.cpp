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
    string s,t;
    cin>>s;
    cin>>t;
    set<char>se={'a','t','c','o','d','e','r','@'};
    //atcoder@の文字を含むものと含まないものに分ける。
    vector<char>s1,s2,t1,t2;
    for(ll i=0;i<s.size();i++){
        if(se.count(s[i])) s1.push_back(s[i]); //含むもの
        else s2.push_back(s[i]); //含まないもの
    }
    for(ll i=0;i<t.size();i++){
        if(se.count(t[i])) t1.push_back(t[i]);
        else t2.push_back(t[i]);
    }
    unordered_map<char,ll> umap_s1,umap_t1,umap_diff;
    
    //含まないもの同士が一致しなかったらどうしようもない。
    sort(s2.begin(),s2.end());
    sort(t2.begin(),t2.end());
    if(s2==t2){
        //aaとttのようなパターンがあるので、各@でどうにかなるか考える。
        for(ll i=0;i<s1.size();i++){
            umap_s1[s1[i]]++;
            umap_t1[t1[i]]++;
        }
        for(auto &[key,value]:umap_s1){
            if(key=='@') continue;
            umap_diff[key]+=umap_s1[key];
        }
        for(auto &[key,value]:umap_t1){
            if(key=='@') continue;
            umap_diff[key]-=umap_t1[key];
        }
        ll cnt_plus=0,cnt_minus=0;
        for(auto &[key,value]:umap_diff){
            if(value>=0)cnt_plus+=value;
            else cnt_minus-=value;
        }
        if(cnt_plus-umap_t1['@']<=0&&cnt_minus-umap_s1['@']<=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }
    else{
        cout<<"No"<<endl;
    }


    
}