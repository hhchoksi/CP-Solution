#include <bits/stdc++.h>
using namespace std;

int main(){
    setprecision(7);
    double a,b;
    cin>>a>>b;
    double n;
    cin>>n;
    vector<double> k;
    for(int i=0;i<n;i++){
        double x,y,v;
        cin>>x>>y>>v;
        double dis = pow((pow((a-x),2)+pow((b-y),2)),0.5);
        double time = dis/v;
        k.push_back(time);
    }
    cout<<setprecision(8)<<*min_element(k.begin(),k.end())<<endl;

    return 0;
}