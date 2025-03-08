#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

ll v_gcd(vector<ll> numbers) {
    ll result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = gcd(result, numbers[i]); // ペアごとにGCDを計算
    }
    return result;
}


int main(){
    ll N,X;
    cin>>N>>X;
    vector<ll> vec(N,0);
    for(int i=0;i<N;i+=1){
        cin>>vec[i];
        vec[i] =abs(vec[i]-X); // 座標Xとの距離
    }
        
    ll result = v_gcd(vec);
    cout << result << endl;
}    
