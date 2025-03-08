#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin>>S;
    bool flag =false;
    int  L= S.size(); // 入力文字の長さ
    int size = L-7; // 取り除く文字サイズ
    //cout<<"取り除くサイズ="<<size<<endl;
    string ans;
    for(int i=0;i<7;i+=1){
        ans.clear();
        ans +=S.substr(0,i);
        ans +=S.substr(i+size,L-(i+size));
        //cout << S.substr(0,i) << ',' << S.substr(i+size,L-(i+size))<<endl;
        if (ans=="keyence"){
            flag=true;
            break;
        }

    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}