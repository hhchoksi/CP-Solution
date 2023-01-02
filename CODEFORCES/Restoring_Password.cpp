#include<bits/stdc++.h>
using namespace std;
#define ll string

int main(){
    int a=0;
    map<ll,int> map;
    ll n;
    cin>>n;
    for(int i=0;i<10;i++){
       ll k;
       cin>>k;
       map[k]=i;
    }
    for(int i=0;i<8;i++){
        ll b = n.substr(a,10);
        a+=10;
        cout<<map[b];
    }
    return 0;
}