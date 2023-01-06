#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    ll j = n-1;
    vector<ll> v,a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<(n/2);i++){
        ll t = v[i]+v[j];
        ll value = pow(t,2);
        a.push_back(value);
        j--;
    }
    ll sum = a[0];
    for(ll i=1;i<(n/2);i++){
        sum+=a[i];
    }
    cout<<sum<<"\n";
    return 0;
}