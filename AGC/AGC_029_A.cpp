#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;

    long long cnt = 0;
    int temp_dist = S.size();
    for (int i = S.size() - 1; i >= 0; i--) {
        if (S[i] == 'B') {
            temp_dist--;
            cnt += (temp_dist - i);
        }
    }
    cout << cnt << endl;
}
