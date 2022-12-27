#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,ans=0;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans=ans+a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            ans=ans+b[i];
        }
        k=b[0];
        for(int i=0;i<n-1;i++){
            if(k<b[i+1]){
                k=b[i+1];
            }
        }
        long long int s = ans-k;
        cout<<s<<endl;
        
    }
    return 0;
}