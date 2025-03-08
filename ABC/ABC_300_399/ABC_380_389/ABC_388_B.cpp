#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;

int main(){
    int N,D,T,L;
    cin>>N>>D;
    vector<int> v_T(N,0);
    vector<int> v_L(N,0);
    for(int i=0;i<N;i+=1){
        cin>>T>>L;
        v_T[i]=T;
        v_L[i]=L;
    }
    vector<int> w;
    for(int i=0;i<D;i+=1){
        vector<int> temp = v_T;
        for(int j=0;j<N;j+=1){
            temp[j]*=(v_L[j]+i+1);
        }
        int max = *max_element(temp.begin(),temp.end());
        w.push_back(max);
    }
    for(int i=0;i<D;i+=1){
        cout << w[i] << endl;
    }
}    
