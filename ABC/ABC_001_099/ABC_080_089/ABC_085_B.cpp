#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main(){
    int N,d;
    vector<int> vec_tot;
    cin>>N;
    for (int i=0;i<N;i+=1){
        cin >>d;
        vec_tot.push_back(d);
    }
    //入っている文字列を抽出する
    set<int> unique_elements(vec_tot.begin(), vec_tot.end());
    vector<int> vec(unique_elements.begin(), unique_elements.end());
    cout << vec.size() << endl;
}