#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;



int main(){
    int N,K;
    cin>>N>>K;
    vector<int> a(N,0);
    for(int i=0;i<N;i+=1){
        cin>>a[i];
    }
    vector<int>::iterator position;  // auto position; で良い．
    int ite;
    position = find(a.begin(), a.end(), 1); //1の場所を見つける
    ite = distance(a.begin(), position);
    
    ite+=1;
    // 左側をまず計算する
    int left = max(0, ite); 
    int left_moves = static_cast<int>(ceil(static_cast<float>(left) / (K - 1)));

    int new_start_p = 0;
    if (left_moves==0)  new_start_p = 0;
    else new_start_p = K+(K-1)*(left_moves-1);

    // 右側
    int right = max(0, N - new_start_p);
    int right_moves = static_cast<int>(ceil(static_cast<float>(right) / (K - 1)));

    // 合計移動回数
    int ans = left_moves + right_moves;

    cout << ans << endl;

    
}    
