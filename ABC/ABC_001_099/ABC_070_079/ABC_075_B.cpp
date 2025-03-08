#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

char count(string S){
    char ans;
    int count=0;
    if (S.size()==8){
        for (int i=0;i<9;i+=1){
            if (S[i]=='#'){
                count +=1;
            }
        }
        //cout << count << endl;
        ans = count +'0';
    }
    else{
        ans = '#';
    }
    //cout << ans << endl;
    return ans;
}



int main(){
    int H,W;
    string s;
    vector<string> vec;
    cin >>H>>W;;
    //外周に”.”を追加する
    string add_vec;
    for (int i=0;i<W+2;i+=1){
        add_vec += ".";
    }
    vec.push_back(add_vec);

    for (int i=0;i<H;i+=1){
        cin >>s;
        s = "."+s+".";
        vec.push_back(s);
    }
    //要素を追加
    vec.push_back(add_vec);

    vector<string> ans;
    
    
    for (int i=1;i<H+1;i+=1){
        string temp_ans;
        for (int j=1;j<W+1;j+=1){
            string temp_value;
            if (vec[i][j]=='.'){
                temp_value +=vec[i-1][j-1];
                temp_value +=vec[i-1][j];
                temp_value +=vec[i-1][j+1];
                temp_value +=vec[i][j-1];
                temp_value +=vec[i][j+1];
                temp_value +=vec[i+1][j-1];
                temp_value +=vec[i+1][j];
                temp_value +=vec[i+1][j+1];
            }
            else{
                temp_value += '%';
            }
            //cout << temp_value <<endl;
            temp_ans += count(temp_value);
        }
        //cout << "temp_ans="<<temp_ans <<endl;
        ans.push_back(temp_ans);
        
    
    }
    for (int i=0;i<H;i+=1){
        cout << ans[i]<<endl;
    }
}