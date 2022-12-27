#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,i=4;
        cin>>a>>b>>c>>d;
        bool flag = false;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        while(i--){
            if(v[0]<v[1] && v[2]<v[3] && v[0]<v[2] && v[1]<v[3]){
                flag = true;
                break;
            }
            swap(v[0],v[1]);
            swap(v[0],v[3]);
            swap(v[0],v[2]);
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}