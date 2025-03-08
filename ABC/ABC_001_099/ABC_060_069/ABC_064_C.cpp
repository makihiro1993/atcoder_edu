#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;


int main(){
    int N,a;
    cin>>N;
    set<int> se;
    int over_num =0;
    for (int i=0;i<N;i+=1){
        cin>>a;
        int ans = a/400;
        if (ans<8){
            se.insert(ans);
        }
        else{
            over_num +=1;
        }
    }
    //まず最小値を求める。
    int ans_min = (int)se.size();
    int ans_max = ans_min+over_num;
    if (ans_min==0){
        ans_min = 1;
    }
    //ans_max = min(8,ans_max);
    cout << ans_min <<' '<< ans_max << endl;
}