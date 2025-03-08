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

int main(){
    int n,m,a;
    cin>>n>>m;
    set<int> se;
    for(int i=0;i<n;i++){
        se.insert(i+1);
    }
    for(int i=0;i<m;i++){
        cin>>a;
        se.erase(a);
    }
    vector<int> ans(se.begin(),se.end());
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << ' ';
    }
    cout << endl;

    
}