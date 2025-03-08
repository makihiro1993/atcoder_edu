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
    string s;
    cin>>s;
    vector<char> ans;
    ll cnt_w=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='W'){
            cnt_w++;
        }
        else if(s[i]=='A'&&cnt_w>0){
            ans.push_back('A');
            for(ll j=0;j<cnt_w;j++){
                ans.push_back('C');
            }
            cnt_w=0;
        }
        else{
            for(ll j=0;j<cnt_w;j++){
                ans.push_back('W');
            }
            cnt_w=0;
            ans.push_back(s[i]);
        }
    }
    for(ll j=0;j<cnt_w;j++){
        ans.push_back('W');
    }
    for(ll i=0;i<ans.size();i++){
        cout << ans[i];
    }
    cout << endl;
    

}