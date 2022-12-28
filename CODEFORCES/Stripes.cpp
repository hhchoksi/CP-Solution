#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        bool flag = false;
        for(int i=0;i<8;i++){
            cin>>s;
            if(s=="RRRRRRRR"){
                flag = true;
            }
        }
        if(flag){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}