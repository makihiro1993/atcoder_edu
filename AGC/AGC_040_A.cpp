#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

long long sum_func(vector<int> vec_obj){
  long long ans = 0;
  int L = vec_obj.size();
  for (int i=0;i <L;i+=1){
    ans += vec_obj[i];
  }
  return ans;
}


int main() {
    string S;
    cin >> S;
    int L = S.size();
    vector<int> vec(L+1,0);
    int cnt =0;
    for (int i=0;i<L;i+=1){
        if (S[i]=='<'){
            vec[i+1] = vec[i]+1;
        }
    }
    for (int i=L-1;i>=0;i-=1){
        if (S[i]=='>'){
            vec[i] = max(vec[i],vec[i+1]+1);
        }
    }
    /*
    for(int i=0;i<L;i+=1){
        cout << vec[i] <<',';
    }
    cout << endl;
    */
    long long ans = sum_func(vec);
    cout << ans << endl;
}

