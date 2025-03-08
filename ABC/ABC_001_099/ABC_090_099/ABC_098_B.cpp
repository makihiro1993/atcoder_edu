#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

string string_to_set_string(string S) {
    set<char> unique_chars(S.begin(), S.end());
    
    string result;
    for (char c : unique_chars) {
        result += c;
    }
    
    //cout << "重複を排除した文字列: " << result << endl;
    return result;
}



int main(){
    int N;
    string S,s1,s2;
    cin>>N;
    cin>>S;
    int ans=0;
    int current_ans;
    vector<string> vec1,vec2;
    for (int i=0;i<N;i+=1){
        current_ans =0;
        s1 = S.substr(0,i);
        s2 = S.substr(i,N-i);
        s1 = string_to_set_string(s1);
        s2 = string_to_set_string(s2);
        int size_1 = s1.size();
        int size_2 = s2.size();
        for (int j=0;j<size_1;j+=1){
            for (int k=0;k<size_2;k+=1){
                if (s1[j]==s2[k]){
                    current_ans +=1;
                    break;
                }
            }
        }
        if (current_ans > ans){
            ans = current_ans;
        }
    }
    cout << ans << endl;

}