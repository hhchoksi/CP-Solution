#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    vector<int> v;
    bool found = false;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<(n-2);i++){
        for(int j=i+1;j<(n-1);j++){
            for(int k=j+1;k<n;k++){
                a=v[i];b=v[j];c=v[k];
                //cout<<a-b<<endl;
                if((b-a)==1 && (c-b)==1){
                    found=true;
                    break;
                }
            }
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}