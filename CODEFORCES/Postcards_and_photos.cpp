#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    string s;
    cin>>s;
    while(s.length()>0){
        int a=0,i=5;
        while(i--){
            if(s[0]==s[a]){
                a++;
                continue;
            }
            else{
                break;
            }
        }
        count++;
        s=s.substr(a,(s.length()-a));
    }
    cout<<count;

    return 0;
}