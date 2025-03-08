#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

using ll = long long;



int main(){
    string S;
    cin>>S;
    int L = S.size();
    string ans;
    for(int i=0;i<L;i+=1){
        if(S[i]!='B'){
            ans +=S[i];
        }
        else{
            if(ans==""){
                continue;
            }
            else{
                ans.erase(ans.size()-1);
            }
        }
    }
        
    cout << ans << endl;
}    
