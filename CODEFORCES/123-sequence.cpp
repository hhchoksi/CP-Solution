#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            a++;
        }
        else if(x==2){
            b++;
        }
        else{
            c++;
        }
    }
    long long int u = max(a,b);
    long long int v = max(c,u);
    cout<<n-v<<endl;
    return 0;
}