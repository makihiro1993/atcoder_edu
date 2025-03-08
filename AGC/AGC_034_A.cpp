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
    ll n,a,b,c,d;
    string s;
    cin>>n>>a>>b>>c>>d;
    cin>>s;
    if(c<d){
        string b_d=s.substr(b,d-b);
        string a_c=s.substr(a,c-a);
        bool x1=true,x2=true;
        //bをdに移動させる
        for(ll i=0;i<b_d.size()-1;i++){
            if(b_d.substr(i,2)=="##") x1=false;
        }
        //aをcに移動させる
        for(ll i=0;i<a_c.size()-1;i++){
            if(a_c.substr(i,2)=="##") x2=false;
        }
        if(x1&&x2){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    //b_dの間に...があればaは追い越しが可能
    string b_d=s.substr(b-2,d-b+3);
    string a_c=s.substr(a,c-a);
    bool axc=true;
    for(ll i=0;i<b_d.size()-2;i++){
        if(b_d.substr(i,3)=="..."){
            axc=false;
        }
    }
    //追い越し不可
    if(axc){
        cout <<"No" << endl;
        return 0;
    }
    bool x1=true,x2=true;
    for(ll i=0;i<b_d.size()-1;i++){
        if(b_d.substr(i,2)=="##") x1=false;
    }
    for(ll i=0;i<a_c.size()-1;i++){
        if(a_c.substr(i,2)=="##") x2=false;
    }
    if(x1&&x2){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }




}