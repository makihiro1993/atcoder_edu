#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

using ll=long long;

int main(){
    string S;
    cin>>S;
    set<char> se = {'A','C','G','T'};
    int cnt =0;
    vector<int> ve;
    for(int i=0;i<S.size();i+=1){
        if(se.count(S[i])){
            cnt +=1;
        }
        else{
            ve.push_back(cnt);
            cnt=0;
        }
    }
    ve.push_back(cnt);
    int max = *max_element(ve.begin(),ve.end());
    cout << max << endl;
}

