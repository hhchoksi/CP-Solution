#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,count=0,add=1;
    cin>>n;
    ll a=n;
    while(a>0){
        a/=10;
        count++;
    }
    if(count==1){
        cout<<"1"<<endl;
    }
    else{
        count--;
        while(count--){
            add*=10;
        }
        ll b=n;
        b+=add;
        while(b>10){
            b/=10;
            count++;
        }
        while(count--){
            b*=10;
        }
        b*=10;
        ll p = b-n;
        cout<<p<<endl;
    }
    return 0;
}