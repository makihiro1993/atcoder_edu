#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int A,B;
    cin >>A >>B;
    int ans =0;
    for (int i=A; i<=B; i+=1){
        string s_base = to_string(i);
        string s_after = to_string(i);
        reverse(s_after.begin(), s_after.end());
        //cout << s_base << "," << s_after << endl;
        if (s_base == s_after){
            ans +=1;
        }
        else{
        }
    }
    cout << ans << endl;
}