#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int a,b,c,d;
        vector<int> v;
        bool flag = false;
        cin>>a;
        v.push_back(a);
        cin>>b;
        v.push_back(b);
        cin>>c;
        v.push_back(c);
        cin>>d;
        v.push_back(d);
        sort(v.begin(),v.end());
        for(int i=0;i<2;i++){
            if(v[i]+v[i+1]>v[i+2]){
                flag = true;
            }
        }
        if(flag){
            cout<<"TRIANGLE"<<endl;
        }
        else{
            for(int i=0;i<2;i++){
                if(v[i]+v[i+1]==v[i+2]){
                    flag = true;
                }
            }
            if(flag){
                cout<<"SEGMENT"<<endl;
            }
            else{
                cout<<"IMPOSSIBLE"<<endl;
            }
        }
        
    }