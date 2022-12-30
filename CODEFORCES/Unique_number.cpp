#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k=9;
        long long int sum=0;
        vector<int> v;
        cin>>x;
        if(x>=1 && x<=9){
            cout<<x<<endl;
        }
        else if(x>45){
            cout<<"-1"<<endl;
        }
        else{
            while(x-sum>k){
                sum+=k;
                v.push_back(k);
                k--;
            }
            cout<<x-sum;
            for(int i=v.size()-1; i>=0; i--){
                cout<<v[i];
            }
        }
    }
}