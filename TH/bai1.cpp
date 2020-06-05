#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string x;
	cin>>t;
	while(t--){
		cin>>x;
		int n = x.length() - 1;
		while(x[n] == '0'){
			x[n] = '1';
			n--;
		}
		if(n>0) x[n] = '0';
		cout<<x<<endl;
	}
	return 0;
}
