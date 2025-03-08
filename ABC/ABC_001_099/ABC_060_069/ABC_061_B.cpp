#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> vec(N,0);
    for (int i=0;i<M;i+=1){
        int a,b;
        cin >>a>>b;
        vec[a-1] +=1;
        vec[b-1] +=1;
    }
    for(int i=0;i<N;i+=1){
        cout << vec[i] << endl;
    }
}