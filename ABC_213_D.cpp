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

int main() {
    ll H, W, N;
    cin >> H >> W >> N;
    vector<ll> row(N), col(N);

    for (ll i = 0; i < N; i++) {
        cin >> row[i] >> col[i];
    }

    // 座標を圧縮
    vector<ll> c_row = row, c_col = col;
    sort(c_row.begin(), c_row.end());
    c_row.erase(unique(c_row.begin(), c_row.end()), c_row.end());

    sort(c_col.begin(), c_col.end());
    c_col.erase(unique(c_col.begin(), c_col.end()), c_col.end());

    // 圧縮した座標のインデックスを出力
    for (ll i = 0; i < N; i++) {
        ll r = lower_bound(c_row.begin(), c_row.end(), row[i]) - c_row.begin() + 1;
        ll c = lower_bound(c_col.begin(), c_col.end(), col[i]) - c_col.begin() + 1;
        cout << r << " " << c << "\n";
    }
}