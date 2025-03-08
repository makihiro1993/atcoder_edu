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
#include <stack>
using namespace std;

using ll = long long;

bool match(char c_st, char c_inp) {
    return (c_st == '(' && c_inp == ')') ||
           (c_st == '[' && c_inp == ']') ||
           (c_st == '<' && c_inp == '>');
}

int main() {
    string s;
    cin >> s;
    //スタックで最後に入れたものとこれから入れるものを比較する。
    stack<char> st;

    for(ll i=0;i<s.size();i++) {
        if (!st.empty() && match(st.top(),s[i])){
            st.pop();
        } 
        else {
            st.push(s[i]);
        }
    }

    if(st.empty()){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}