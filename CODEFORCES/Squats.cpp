#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a==b){
        cout<<"0"<<endl;
        cout<<s<<endl;
    }
    else if(b<a){
        int res = (a-b)/2;
        int k = res;
        int i=0;
        while(res>0){
            i++;
            if(s[i]=='x'){
                s[i] = 'X';
                res--;
            }
        }
        cout<<k<<endl<<s<<endl;
    }
    else{
        int res = (b-a)/2;
        int k =res;
        int i=0;
        while(res>0){
            i++;
            if(s[i]=='X'){
                s[i] = 'x';
                res--;
            }
        }
        cout<<k<<endl<<s<<endl;
    }
}