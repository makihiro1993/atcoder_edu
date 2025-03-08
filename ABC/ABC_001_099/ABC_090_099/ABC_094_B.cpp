#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

using ll=long long;

int main(){
    int N,M,X,A;
    cin>>N>>M>>X;
    vector<int> ve(M,0);
    int ite=0;
    for(int i=0;i<M;i+=1){
        cin>>A;
        if(A>=X){
            ite = i;
            break;
        }
    }
    int ans = min(ite,M-ite);
    cout << ans<<endl;
}

