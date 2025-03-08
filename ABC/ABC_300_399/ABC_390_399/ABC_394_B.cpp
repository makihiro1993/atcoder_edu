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
    int n;
    cin>>n;
    string s;
    vector<pair<int,string>> vs(n);
    for(int i=0;i<n;i++){
        cin>>s;
        pair<int,string> temp_pair={s.size(),s};
        vs[i]=temp_pair;
    }
    //ソートを実施
    sort(vs.begin(),vs.end());
    for(int i=0;i<n;i++){
        cout << vs[i].second;
    }
    cout << endl;

}