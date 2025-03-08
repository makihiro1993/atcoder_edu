#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
#include <map>
#include <unordered_map>
using namespace std;

using ll = long long;

// 最頻値を取得する関数
pair<ll, ll> get_freq(const unordered_map<ll, ll>& freq_map, ll exclude = -1) {
    ll max_count = 0, value =0;
    for (const auto& [key, count] : freq_map) {
        if (key == exclude) continue;  // 除外する値
        if (count > max_count) {
            max_count = count;
            value = key;
        }
    }
    return {value, max_count};
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);

    unordered_map<ll, ll> odd, even;
    for (ll i=0;i<n;i++){
        cin >> v[i];
        if (i%2==0) even[v[i]]++;
        else odd[v[i]]++;
    }

    // 最頻値と2番目に多い要素を取得
    auto [v_e1, freq_e1] = get_freq(even);
    auto [v_o1, freq_o1] = get_freq(odd);

    auto [v_e2, freq_e2] = get_freq(even, v_e1); // 2番目
    auto [v_o2, freq_o2] = get_freq(odd, v_o1);

    ll ans = 0;

    if (v_e1 != v_o1) {
        // 最頻値が異なる場合
        ans = n - (freq_e1 + freq_o1);
    } else {
        // 最頻値が同じ場合
        ll option1 = n - (freq_e1 + freq_o2);
        ll option2 = n - (freq_e2 + freq_o1);
        ans = min(option1, option2);
    }

    cout << ans << endl;
}