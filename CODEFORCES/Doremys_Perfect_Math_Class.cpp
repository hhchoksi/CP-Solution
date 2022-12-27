#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        ll ans = v[0];
        for(int i=1; i<n; i++){
            ans = __gcd(v[i],ans);
        }
        ll final = v[n-1]/ans;
        cout<<final<<endl;
    }
    return 0;
}