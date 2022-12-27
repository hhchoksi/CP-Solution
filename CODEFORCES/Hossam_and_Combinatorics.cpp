#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,count=0,h=0,ans,c=0;
        cin>>n;
        vector<long long int> v;
        for(int i=0; i<n; i++){
            cin>>k;
            v.push_back(k);
        }
        long long int j = v[0];
        long long int l = v[0];
        for(int i=1; i<n; i++){
            if(v[i]>j){
                j=v[i];
            }
            if(v[i]<l){
                l=v[i];
            }
            if(v[0]==v[i]){
                c++;
            }
        }
        for(int i=0; i<n; i++){
            if(j==v[i]){
                count++;
            }
            if(l==v[i]){
                h++;
            }
        }
        if(c==(n-1)){
            ans = (n-1)*(n);
        }
        else{
            ans = count*h*2;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}