#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    char c;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[k-1]<<endl;
    return 0;
}