#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;


int main(){
    ll H,W;
    cin>>H>>W;
    string S;
    //S1〜SHを読み込む
    vector<vector<char>> v(H,vector<char>(W));
    for(ll i=0;i<H;i+=1){
        cin>>S;
        for(ll j=0;j<W;j+=1){
            v[i][j]=S[j];
        }
    }
    //T1〜THを読み込む
    vector<vector<char>> t(H,vector<char>(W));;
    for(ll i=0;i<H;i+=1){
        cin>>S;
        for(ll j=0;j<W;j+=1){
            t[i][j]=S[j];
        }
    }
    //縦列の#の数を数えてみ
    vector<ll> cv(W,0) , ct(W,0);
    for(ll i=0;i<W;i+=1){
        ll cnt_s=0;
        ll cnt_t=0;
        for(ll j=0;j<H;j+=1){
            if(v[j][i]=='#'){
                cnt_s +=1;
            }
            if(t[j][i]=='#'){
                cnt_t +=1;
            }
        }
        cv[i]=cnt_s;
        ct[i]=cnt_t;
    }
    vector<string> ts(W),tt(W);
    for(ll i=0;i<H;i+=1){
        for(ll j=0;j<W;j+=1){
            ts[j] +=v[i][j];
            tt[j] +=t[i][j];
        }
    }
    sort(ts.begin(),ts.end());
    sort(tt.begin(),tt.end());
    if(ts==tt){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
}