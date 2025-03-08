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
    int Q;
    cin>>Q;
    deque<int> m(100,0);
    int type,x;
    for(int i=0;i<Q;i++){
        cin>>type;
        if(type==1){
            cin>>x;
            m.push_back(x);
        }
        if(type==2){
            int l=m.size();
            cout << m[l-1]<<endl;
            m.pop_back();
        }

    }
}