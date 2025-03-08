#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

string cal(string a,string b){
    unordered_map<char,int> da,db;
    for(int i=0;i<a.size();i++){
        if(da.count(a[i])){
            da[a[i]]++;
        }
        else{
            da[a[i]]=1;
        }
    }
    for(int i=0;i<b.size();i++){
        if(db.count(b[i])){
            db[b[i]]++;
        }
        else{
            db[b[i]]=1;
        }
    }
    //共通項を見てみる
    set<char> se(a.begin(),a.end());
    vector<char> v(se.begin(),se.end());
    string ans;
    for(int i=0;i<v.size();i++){
        if(da.count(v[i])&&db.count(v[i])){
            int value = min(da[v[i]],db[v[i]]);
            for(int j=0;j<value;j++){
                ans +=v[i];
            }
        }
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    string s;
    vector<string> vs(n);
    for(int i=0;i<n;i++){
        cin>>s;
        sort(s.begin(),s.end());
        vs[i]=s;
    }
    string sp=vs[0];
    for(int i=0;i<n;i++){
        sp = cal(sp,vs[i]);
        if(sp.size()==0){
            cout << endl;
            return 0;
        }
    }
    cout << sp << endl;
}