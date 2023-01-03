#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int a = stoi(s.substr(3,2));
    int b = stoi(t.substr(3,2));

    int x = stoi(s.substr(0,2));
    int y = stoi(t.substr(0,2));
    if(a>=b){
        int ans = a-b,res;
        string h,m;
        if(x>=y){
            res = x-y;
        }
        else{
            res = x-y+24;
        }
        if(res>=0 && res<=9){
            h = "0" + to_string(res);
        }
        else{
            h = to_string(res);
        }
        if(ans>=0 && ans<=9){
            m = "0" + to_string(ans);
        }
        else{
            m = to_string(ans);
        }
        cout<<h<<":"<<m<<endl;
    }
    else{
        int ans = a-b+60,res;
        int test = x-y-1;
        string h,m;
        if(test>=0){
            res = test;
        }
        else{
            res = test+24;
        }
        if(res>=0 && res<=9){
            h = "0" + to_string(res);
        }
        else{
            h = to_string(res);
        }
        if(ans>=0 && ans<=9){
            m = "0" + to_string(ans);
        }
        else{
            m = to_string(ans);
        }
        cout<<h<<":"<<m<<endl;
    }
    return 0;
}