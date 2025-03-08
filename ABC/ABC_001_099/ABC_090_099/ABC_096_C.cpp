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
    int H,W;
    cin>>H>>W;
    vector<vector<char>> v(H+2,vector<char>(W+2,'x'));
    //周囲を.で埋める
    vector<char> v_dot(W+2,'.');
    v[0]=v_dot;
    v[H+1]=v_dot;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>v[i+1][j+1];
        }
        v[i][0]='.';
        v[i][W+1]='.';
    }
    for(int i=1;i<H+1;i++){
        for(int j=1;j<W+1;j++){
            //.の場合continue
            if(v[i][j]=='.') continue;
            //#の場合処理を行う
            if(v[i][j]==v[i-1][j]||v[i][j]==v[i+1][j]||v[i][j]==v[i][j-1]||v[i][j]==v[i][j+1]){
                continue;
            }
            else{
                cout << "No" << endl;
                return 0;
            }

        }
    }
    cout << "Yes" << endl;


}