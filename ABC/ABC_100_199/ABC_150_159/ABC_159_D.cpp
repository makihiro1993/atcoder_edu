#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

long long comb(long long N){
    return N*(N-1)/2;
}


int main(){
    int N,A;
    int N_max = 201010;
    cin >>N;
    vector<int> vec;        //配列を記録
    vector<int> vec_cnt(N_max,0); //出現回数を記録
    for(int i=0;i<N;i+=1){
        cin>>A;
        vec.push_back(A);
        vec_cnt[A] +=1;
    }
    vector<long long> ve_a(N, 0);
    //最初に全体の値を計算。
    long long cnt_init = 0;
    for (int x : vec_cnt) {
        if(x>1){
            //cout << x << endl;
            cnt_init += comb(x);
        }
        
    }
    //cout << cnt_init << endl;

    for (int i = 0; i <N; i++) {
        long long cnt = cnt_init;
        long long num = vec_cnt[vec[i]];
        //long long v1 = comb(num);
        //long long v2 = comb(num-1);
        //cout << v1 << ',' <<v2 << endl;
        //要素を引く
        cnt -=comb(num);
        cnt +=comb(num-1);
        ve_a[i] = cnt;
    }

    for (int i = 0; i < N; i++) {
        cout << ve_a[i] << endl;
    }

}