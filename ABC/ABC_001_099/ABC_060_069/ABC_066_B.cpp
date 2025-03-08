#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;
    int loop_num = S.size();
    int size;
    for (int i=0;i < loop_num;i+=1){
        string S_new = S.substr(0,loop_num-i-1);
        int L = S_new.size();
        if (L%2 == 0){
            if (S_new.substr(0,L/2)==S_new.substr(L/2,L)){
                size = S_new.size();
                break;
            }
        }
    }
    cout << size << endl;
}