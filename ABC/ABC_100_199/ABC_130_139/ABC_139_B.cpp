#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    int cnt = 1;
    int loop = 0;
    if (B>1){
        while(true){
            cnt +=A-1;
            loop +=1;
            if (cnt >=B){
                break;
            }
        }
    }
    cout << loop << endl;
}