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
    int n,m;
    cin>>n>>m;
    //参照するスイッチの番号
    vector<vector<int>> v;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        vector<int> temp_vec(k,0);
        for(int j=0;j<k;j++){
            cin>>temp_vec[j];
        }
        v.push_back(temp_vec);
    }
    //参照するスイッチの状態
    vector<int> p(m,0);
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    //N数が10なので全探索を実施する
    vector<vector<int>> pattern_tot;
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<int> pattern;
        for (int i = n - 1; i >= 0; i--) {
            // bitのi番目が立っているかを確認
            if (bit & (1 << i)) {
                pattern.push_back(1);
            } else {
                pattern.push_back(0);
            }
        }
        pattern_tot.push_back(pattern);
    }
    //全てのパターンを調査する
    int cnt=0;
    for(int i=0;i<pattern_tot.size();i++){
        bool flag=true;
        for(int j=0;j<m;j++){
            //j番目の電球について
            int s_on=0;
            for(int k=0;k<v[j].size();k++){
                s_on+=pattern_tot[i][v[j][k]-1];
            }
            if(s_on%2!=p[j]){
                flag=false;
                break;
            }
        }
        if(flag){
          cnt++;
        }
    }
    cout << cnt << endl;

}