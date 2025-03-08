#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> vec;
    for (int i=0;i<N;i+=1){
        int a;
        cin >>a;
        vec.push_back(a);
    }
    vector<bool> visited(N,false);
    int cnt=0;
    int i=0;
    while(true){
        if(visited[i]){
            cnt = -1;
            break;
        }
        visited[i] = true;
        if (i==1){
            //cnt+=1;
            break;
        }
        i = vec[i]-1;
        cnt+=1;
        //cout << vec[i] << endl;
    }
    cout << cnt <<endl;
    
}