#include<bits/stdc++.h>
#define ll long long int
using namespace std;;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,a=1,count=0;
        cin>>n>>x>>y;
        ll k = x+y;
        ll h=x,j=y;
        if((x!=0 && y!=0)||(x==0 && y==0)){
            cout<<"-1"<<endl;
        }
        else if((n-1)%(x+y)!=0){
            cout<<"-1"<<endl;
        }
        else{
            ll ans = (n-1)/(x+y);
            for(int i=1;i<n;i++){
                cout<<a<<" ";
                count++;
                if(count==k){
                    a+=(k+1);
                    x+=x;y+=y;
                }
                else if(count==(x+y)){
                    a+=k;
                    x+=h;y+=j;
                }
            }
        }
    }
    return 0;
}