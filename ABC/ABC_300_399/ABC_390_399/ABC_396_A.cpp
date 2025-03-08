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
    int n;
    cin>>n;
    int cnt=0;
    int a;
    int value=-1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=value){
            value=a;
            cnt=0;
        }
        else{
            cnt++;
            if(cnt>=2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}