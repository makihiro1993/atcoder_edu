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

deque<char> cal(string &x){
    deque<char> ans(x.size());
    for(int i=0;i<x.size();i++){
        ans[i]=x[i];
    }
    return ans;
}



int main(){
    string sa,sb,sc;
    cin>>sa>>sb>>sc;
    deque<char> sqa,sqb,sqc;
    sqa=cal(sa),sqb=cal(sb),sqc=cal(sc);
    char next_char=sqa[0];
    sqa.pop_front();
    while(true){
        if(next_char=='a'){
            if(sqa.size()==0){
                cout<<'A'<<endl;
                return 0;
            }
            next_char=sqa[0];
            sqa.pop_front();
        }
        else if(next_char=='b'){
            if(sqb.size()==0){
                cout<<'B'<<endl;
                return 0;
            }
            next_char=sqb[0];
            sqb.pop_front();
        }
        else if(next_char=='c'){
            if(sqc.size()==0){
                cout<<'C'<<endl;
                return 0;
            }
            next_char=sqc[0];
            sqc.pop_front();
        }

    }

}