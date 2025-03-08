#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  
  int num ;
  int mod = (a+b)%2;
  if (mod==1){
    num = 1;
  }
  else {
    num = 0;
  }
  int average = (a+b)/2;
  cout << average + num << endl;
  // ここにプログラムを追記
}
