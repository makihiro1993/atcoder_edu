#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <list>
using namespace std;

using ll = long long;

void printMatrix(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<char>> s(n,vector<char>(n)),t(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>t[i][j];
        }
    }
    //#から作成する絵を抜き出す座標を取得する
    int ys1 = n, ys2 = -1, xs1 = n, xs2 = -1;
    int yt1 = n, yt2 = -1, xt1 = n, xt2 = -1;
    // Sの領域を特定
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '#') {
                ys1 = min(ys1, i);
                ys2 = max(ys2, i);
                xs1 = min(xs1, j);
                xs2 = max(xs2, j);
            }
        }
    }
    // Tの領域を特定
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j] == '#') {
                yt1 = min(yt1, i);
                yt2 = max(yt2, i);
                xt1 = min(xt1, j);
                xt2 = max(xt2, j);
            }
        }
    }
    //SとTから該当箇所を抜き出す
    vector<vector<char>>sq,tq;
    for(int i=ys1;i<=ys2;i++){
        vector<char> temp_v;
        for(int j=xs1;j<=xs2;j++) temp_v.push_back(s[i][j]);
        sq.push_back(temp_v);
    }
    for(int i=yt1;i<=yt2;i++){
        vector<char> temp_v;
        for(int j=xt1;j<=xt2;j++) temp_v.push_back(t[i][j]);
        tq.push_back(temp_v);
    }
    //回転処理を行い一致するか判定する
    for(int k=0;k<=4;k++){
        int M=sq.size();
        int N=sq[0].size();
        vector<vector<char>> matrix_new(N,vector<char>(M));//回転させる
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                matrix_new[j][M-1-i]=sq[i][j];
            }
        }
        if(matrix_new==tq){
            cout <<"Yes"<<endl;
            return 0;
        }
        sq=matrix_new; //更新
    }
    cout<<"No"<<endl;

}