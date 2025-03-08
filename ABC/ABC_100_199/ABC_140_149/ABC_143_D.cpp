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
    int N,i,j;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int max_v=a[N-1];

    ll cnt=0;

    for(i=0;i<N-2;i++){
        for(j=i+1;j<N-1;j++){
            //cout << a[i] << ',' << a[j] << endl;
            int cp=a[i]+a[j];
            auto it = upper_bound(a.begin(),a.end(),cp-1);
            int index=it-a.begin();
            //cout << a[index] << endl;
            if(a[index-1]<cp){
              //cout << a[i] << ',' << a[j]<<','<<index-1<<','<<a[index-1] << endl;
              cnt += max(0,index-1-j);
            }
        }

    }
    cout << cnt << endl;
}