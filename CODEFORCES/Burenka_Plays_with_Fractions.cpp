#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,count=0,i;
        cin>>a>>b>>c>>d;
        ll x=a*d,y=b*c;
        if(y>x){
            i=x;
            x=y;
            y=i;
        }
        if(((a*d)==(b*c))){
            cout<<"0"<<endl;
        }
        else if((a!=0 && c==0) || (a==0 && c!=0)){
            cout<<"1"<<endl;
        }
        else if(x%y==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        
    }
    return 0;
}