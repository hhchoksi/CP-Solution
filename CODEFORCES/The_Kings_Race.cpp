#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll ans = x+y;
    ll a = 2;
    ll b = n+n;
    ll t1 = ans-a;
    ll t2 = b-ans;
    if(t1<=t2){
        cout<<"White"<<endl;
    }
    else{
        cout<<"Black"<<endl;
    }

    return 0;
}