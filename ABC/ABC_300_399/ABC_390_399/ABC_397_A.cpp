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

int main(){
    float x;
    cin>>x;
    int y;
    if(x>=38.0) y=1;
    else if (x<37.5) y=3;
    else y=2;
    cout<<y<<endl;
}