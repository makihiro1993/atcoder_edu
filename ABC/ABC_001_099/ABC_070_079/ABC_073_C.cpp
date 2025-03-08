#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main(){
    int N,A;
    cin>>N;
    set<int> s;
    for(int i=0;i<N;i+=1){
        cin>>A;
        if(s.count(A)){
            s.erase(A);
        }
        else{
            s.insert(A);
        }
        
    }
    int ans = s.size();
    cout << ans << endl;


}