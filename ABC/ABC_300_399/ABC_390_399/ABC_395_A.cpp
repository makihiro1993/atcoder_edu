#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    int n,a;
    cin>>n;
    int init=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>init){
            init = a;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}