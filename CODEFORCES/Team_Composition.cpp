#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b;

        if(a==b){
            c = a/2;
            cout<<c<<endl;
        }
        else if(a>b){
            c = (a+b)/4;
            if(b<=c){
                cout<<b<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
        else{
            c = (a+b)/4;
            if(a<=c){
                cout<<a<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
    }
    return 0;
}