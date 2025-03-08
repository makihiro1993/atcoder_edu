#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,A;
    cin >> N;
    vector<int> vec;
    for (int i=0;i<N;i+=1){
        cin >>A;
        vec.push_back(A);
        }
    //全て偶奇か判定
    int ans =0;
    int mod;
    bool chk = false;
    while (true){
        for (int i=0;i<N;i+=1){
            mod = vec[i]%2;
            if (mod==0){
                vec[i] = vec[i]/2;
            }
            else{
                chk = true;
                break;
            } 
        }
        if (chk){
            break;
        }
        ans +=1;
    }
    cout << ans << endl;
}