#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;

using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<vector<char>> ans(n,vector<char>(n,'x'));
    char color;
    for(int i=0;i<n;i++){
        int obj=n-i;
        if(i>obj)break;
        if(i%2==1)color='.';
        else color='#';
        for(int k=i;k<n-i;k++){
            for(int j=i;j<n-i;j++){
                ans[k][j]=color;
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j];
        }
        cout<< endl;
    }


}