#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(7,0),b;
    for(int i=0; i<n; i++){
        int k,c=7;
        cin>>k;
        while(c--){
            int d = k%10;
            b.push_back(d);
            k = k/10;
        }
        for(int i=0; i<7; i++){
            a[i]+=b[i];
        }
        b.clear();
    }
    cout<<*max_element(a.begin(),a.end());

    return 0;
}