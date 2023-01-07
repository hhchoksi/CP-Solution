#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,z=0,o=0;
        cin>>n;
        vector<ll> v;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
            if(x==1){
                o++;
            }
            else if(x==0){
                z++;
            }
        }
        z=pow(2,z);
        if(z==0){
            cout<<o<<endl;
        }
        else{
            cout<<o*z<<endl;
        }

    }
    return 0;
}