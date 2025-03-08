#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int main(){
    int N,a;
    cin>>N;
    vector<int> vec,vec_false;
    for (int i=0;i<N;i+=1){
        cin>>a;
        vec.push_back(a);
        vec_false.push_back(a);
        vec_false.push_back(a-1);
        vec_false.push_back(a+1);
    }
    //最頻値を求める。
    map<int, int> freq;
    for (int num : vec_false) {
        freq[num]++;
    }

    int mode = vec_false[0];
    int max_count = 0;
    for (const auto& [key, value] : freq) {
        if (value > max_count) {
            max_count = value;
            mode = key;
        }
    }
    int avg = mode;
    //cout << avg << endl;
    vector<int> vec_cnt;
    for(int k=-1000;k<1000;k+=1){
        int cnt=0;
        int avg_k = avg +k;
        for(int i=0;i<N;i+=1){
            if(vec[i]-1==avg_k||vec[i]==avg_k||vec[i]+1==avg_k){
                cnt +=1;
            }
        }
        vec_cnt.push_back(cnt);
    }
    int max = *max_element(begin(vec_cnt), end(vec_cnt));

    cout << max << endl; 
}