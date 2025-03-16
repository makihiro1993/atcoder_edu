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
    ll n;
    cin>>n;
    string s;
    unordered_map<string,ll>umap;
    for(ll i=0;i<n;i++){
        cin>>s;
        umap[s]++;
        if(umap[s]==1){
            cout<<s<<endl;
        }
        else{
            cout<<s<<'('<<umap[s]-1<<')'<<endl;
        }

    }
}