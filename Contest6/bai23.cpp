#include<bits/stdc++.h>
using namespace std;

void slove(long a[], long n){
	vector<long> v(n+1,0);
	for(long i = 1 ; i <= n-1; i++)
		v[a[i]]++;
	for(int i = 1; i <= n; i++)
		if (v[i] == 0){
			cout << i << endl;
			break;
		}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long a[n-1];
		for(long i = 1 ; i <= n-1; i++) cin >> a[i];
		slove(a,n);
	}
}


