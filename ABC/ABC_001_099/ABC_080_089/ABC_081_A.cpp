#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  
  int num = 0 ;
  int dig = 10;
  int i;
  int value;
  for (i = 0; i<=2; i +=1){
    value = (a/static_cast<int>(pow(dig,i)))%dig;
    //cout << i << value << endl;
    num += value;
  }
  
  cout << num << endl;
}
