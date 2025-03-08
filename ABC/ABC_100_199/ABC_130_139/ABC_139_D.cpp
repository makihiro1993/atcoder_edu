#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

long long sum(long long N){
    long long ans;
    ans = N*(N+1)/2;
    return ans;
}

int main(){
    long long N;
    cin>>N;
    long long ans;
    ans = sum(N-1) -1; //n=1からN-1までの総和
    ans += 1;
    cout << ans << endl;
}