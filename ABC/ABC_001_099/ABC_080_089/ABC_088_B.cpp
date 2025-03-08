#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int find_index(vector<int> vec,int target) {
    int index = -1; // 初期値を -1 にして「見つからない」状態を表現
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            index = i;
            break;
        }
    }
    return index;
}

int sum_func(vector<int> vec){
    int sum = 0;
    for (int i=0;i<vec.size();i+=1){
        sum += vec[i];
    }
    return sum;
}

int main(){
    int N,a;
    vector<int> vec,v1,v2; // vec全体。v1:アリス,v2:Bob
    cin>>N;
    for (int i=0;i<N;i+=1){
        cin>>a;
        vec.push_back(a);
    }
    int loop = 0;
    while(true){
        int max = *max_element(begin(vec), end(vec));
        if (loop%2 == 0){
            v1.push_back(max);
        }
        else{
            v2.push_back(max);
        }
        int index = find_index(vec,max);
        vec.erase(vec.begin() + index);
        if(vec.size()==0){
          break;
        }
        loop += 1;
    }
    int ans_v1 = sum_func(v1);
    int ans_v2 = sum_func(v2);
    int ans = ans_v1 - ans_v2;
    cout << ans << endl;
}