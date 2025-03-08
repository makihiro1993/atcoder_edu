#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iomanip>
#include <numeric>
using namespace std;

using ll = long long;

bool simple_deg(vector<int> vec){
    //単調減少か単調増加か判断する。
    int N = vec.size();
    for(int i=0;i<N-2;i+=1){
        int a = vec[i+1]-vec[i];
        int b = vec[i+2]-vec[i+1];
        if(a*b<0){
            return false;
        }
    }
    return true;
}

vector<vector<int>> div_vec(vector<int> vec){
    auto ite = find(vec.begin(),vec.end(),0);
    int i;
    i = distance(vec.begin(),ite);
    int N = vec.size();
    vector<int> a(i,0),b(N-i-1,0);
    copy(vec.begin(),vec.begin()+i,a.begin());
    copy(vec.begin()+i+1,vec.end(),b.begin());
    vector<vector<int>> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

void print_vec(vector<int> vec){
    for(int i=0;i<vec.size();i+=1){
        cout << vec[i] << ',';
    }
    cout << endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> v(N,0);
    for(int i=0;i<N;i+=1){
        cin>>v[i];
    }
    
    vector<int> v_final(N,0);
    int ans =0;
    while(true){
        int L=0,R=0;
        bool flag_L = true;
        bool flag_R = false;
        for(int i=0;i<N;i+=1){
            if(v[i]!=0){
                if(flag_L){
                    L=i;
                    flag_L = false;
                }
            }
            if(v[i]==0&&flag_L==false){
                R=i-1;
                flag_R = true;
                break;

            }
        }
        if(flag_R==false){
            R=N-1;
        }
        int min = *min_element(v.begin()+L,v.begin()+R+1);
        for(int i=L;i<=R;i+=1){
            v[i]-=min;
        }
        ans += min;
        //cout << "process"<<endl;
        //print_vec(v);
        if(v==v_final){
            break;
        }
    }
    cout << ans << endl;
}