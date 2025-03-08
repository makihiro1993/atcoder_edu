#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N,T,t;
    cin>>N>>T;
    vector<int> vec;
    for(int i=0;i<N;i+=1){
        cin>>t;
        vec.push_back(t);
    }
    long long ans=0;
    for(int i=0;i<N-1;i+=1){
        ans += min(T,vec[i+1]-vec[i]);
    }
    ans +=T;
    cout << ans << endl;
}