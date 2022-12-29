#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,m;
    cin>>n>>m;
    if(m>n){
        ll ans = n*(m-1);
        cout<<ans;
    }
    else{
        ll ans = (n-1)*m;
        cout<<ans;
    }
    return 0;
}