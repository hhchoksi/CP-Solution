#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define c cout<<
int main(){
    ll n,p1,p2,p3,t1,t2,res=0,ans=0;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<ll> v;
    for(ll i=0;i<2*n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(ll i=0;i<2*n;i+=2){
        if(i==((2*n)-2)){
            res+=((v[i+1]-v[i])*p1);
            
        }
        else{
            res+=((v[i+1]-v[i])*p1);
            ans = v[i+2]-v[i+1];
            if(ans>=t1){
                res+=(t1*p1);
                ans-=t1;
                if(ans>=t2){
                    res+=(t2*p2);
                    ans-=t2;
                    res+=(ans*p3);
                }
                else{
                    res+=(ans*p2);
                }
            }
            else{
                res+=(ans*p1);
            }
            
        }
    }
    c res<<endl;
    return 0;
}