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

ll cal(const vector<int> vec,int num){
    ll ans=0;
    for(int i=0;i<vec.size();i++){
        ans+=(vec[i]-num)*(vec[i]-num);
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_value= *min_element(a.begin(),a.end());
    int max_value=*max_element(a.begin(),a.end());
    vector<ll> v_ans;
    for(int i=min_value;i<=max_value;i++){
        v_ans.push_back(cal(a,i));
    }
    cout << *min_element(v_ans.begin(),v_ans.end()) << endl;


}