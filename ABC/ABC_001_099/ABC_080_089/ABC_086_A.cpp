#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int mod = (a*b)%2;

  if (mod == 1){
    cout << "Odd" << endl;
  }
  else{
    cout << "Even" << endl;
  }

}
