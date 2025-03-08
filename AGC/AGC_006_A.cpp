#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

int main(){
    int N;
    string s,t;
    cin>>N;
    cin>>s>>t;
    vector<char> vs(s.begin(),s.end());
    vector<char> vt(t.begin(),t.end());
    int x=0;
    bool flag_break=true;
    for(int i=0;i<N;i++){
        bool flag=true;
        for(int j=i;j<N;j++){
            //cout << "(i,j)=" << i<<',' << j << endl;
            //cout << vs[j] << ',' << vt[j-i] << endl;
            if(vs[j]!=vt[j-i]) flag=false;
        }
        if(flag){
          //cout <<"searched"<<endl;
          x=i;
          flag_break=false;
          break;
        }
        
    }
    if(flag_break){
      x=t.size();
    }
    for(int i=N-x;i<N;i++){
        s+=t[i];
    }
    cout << s.size() << endl;
}