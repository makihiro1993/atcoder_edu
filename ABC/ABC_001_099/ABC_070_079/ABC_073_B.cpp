#include <bits/stdc++.h>
using namespace std;

int main() {
  int N ;
  cin >> N;
  int a,b;
  int ans = 0;
  for (int i=0;i<N;i+=1){
    cin >> a >>b;
    ans +=(b-a+1);
  }
  cout << ans << endl;
}