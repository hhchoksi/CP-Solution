#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int i=1,count,n;
        cin>>n;
        long long int j = 3*n;
        if(n==1){
            cout<<"1"<<endl<<"1"<<" "<<"2"<<endl;
        }
        else{
            count = (n+1)/2;
            cout<<count<<endl;
            while(count--){
                    cout<<i<<" "<<j<<endl;
                    i+=3;
                    j-=3;
                
            }
        }
    }
    return 0;
}