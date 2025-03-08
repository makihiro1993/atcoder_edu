#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<char> ans;
    while(true){
        if(n%2==0){
            n/=2;
            ans.push_back('B');
        }
        else{
            n--;
            ans.push_back('A');
        }
        if(n==0){
            break;
        }
    }
    reverse(ans.begin(),ans.end());
    for(char x:ans){
        cout << x;
    }
    cout<<endl;

}