#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    //単に行方向と列方向から黒く塗れば良い場合はYes
    if(k%n==0||k%m==0){
        cout << "Yes" << endl;
        return 0;
    }
    set<int> se;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            int area = i*j+(n-i)*(m-j);
            se.insert(area);
        }
    }
    if(se.count(k)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


}