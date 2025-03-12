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

void print_vec(vector<int> x){
  for(int x1:x){
    cout << x1 << ',';
  }
  cout <<endl;
  return;
}


int main(){
    ll N;
    cin>>N;
    vector<ll> A(N);
    for(ll i=0;i<N;i++) cin>>A[i];
    vector<int> vec(10,0), next_vec(10,0),base_vec(10,0);
    vec[A[0]]=1;
    //print_vec(vec);
    for(ll i=0;i<N-1;i++){
        for(int j=0;j<10;j++){
            int next_f = (j+A[i+1])%10;
            int next_g = (j*A[i+1])%10;
            next_vec[next_f] += vec[j];
            next_vec[next_f]%=998244353;
            next_vec[next_g] += vec[j];
            next_vec[next_g]%=998244353;
        }
        vec=next_vec; // 更新
        //print_vec(vec);
        next_vec = base_vec;
    }
    for(int i=0;i<10;i++){
        cout << vec[i] << endl;
    }

}