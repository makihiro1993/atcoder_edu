#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<char>> S(N,vector<char>(N));
    vector<vector<char>> T(M,vector<char>(M));
    //グリッドSを読み込む
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>S[i][j];
        }
    }
    //グリッドMを読み込む
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cin>>T[i][j];
        }
    }
    //cout << S[0][0] << endl;
    //cout <<T[0][0] << endl;

    //グリッドSからMをを抽出する
    for(int i=0;i<=N-M;i++){
        for(int j=0;j<=N-M;j++){
            vector<vector<char>> Tg(M,vector<char>(M));
            for(int k=0;k<M;k++){
                for(int l=0;l<M;l++){
                    Tg[k][l]=S[i+k][j+l];
                }
            }
            if(T==Tg){
                cout << i+1 << ' ' << j+1 << endl;
                return 0;
            }

        }

    }
}