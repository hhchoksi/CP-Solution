#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b,i,ans,res=0;
        cin>>a>>b;
        
        while(a>0 && b>0){
            if(b>a){
            i=a;
            a=b;
            b=i;
            }
            ans=a/b;
            a-=(ans*b);
            res+=ans;
        }
        cout<<res<<"\n";
    }
    return 0;

}