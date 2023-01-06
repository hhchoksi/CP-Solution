#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,m;
    cin>>n>>m;
    if(m==1){
        ll ans = n-1;
        cout<<ans;
    }
    else{
        ll ans = (m-1)*n;
        cout<<ans;
    }
    return 0;
}