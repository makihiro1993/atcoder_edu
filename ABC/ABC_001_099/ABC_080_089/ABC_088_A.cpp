#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N;
  cin >> A;

  int mod = N%500;

  if (mod > A){
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }

}

