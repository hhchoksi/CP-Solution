#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
		// your code goes here
	    ll n,k,a,b;
		cin>>n>>k;
		string s;
		cin>>s;
		long double ans = ceil((double)n/2);
		a=n-k;
		b=k-1;
		if(k>ans){
			while(a--){
				cout<<"RIGHT"<<endl;
			}
			for(int i=s.length()-1;i>=0;i--){
				cout<<"PRINT"<<" "<<s[i]<<endl;
				if(i==0){
					break;
				}
				cout<<"LEFT"<<endl;
			}
		}
		else{
			while(b--){
				cout<<"LEFT"<<endl;
			}
			for(int i=0;i<n;i++){
				cout<<"PRINT"<<" "<<s[i]<<endl;
				if(i==n-1){
					break;
				}
				cout<<"RIGHT"<<endl;
			}
		}
		return 0;
}
