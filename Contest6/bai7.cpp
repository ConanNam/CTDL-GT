#include<bits/stdc++.h>
using namespace std;

void slove(long a[], int n){
	long b[n];
	for(int i = 0 ; i < n; i++)	b[i] = a[i];
	sort(b, b+n);
	for(int i = 0 ; i < n; i++)
		if (a[i] != b[i]){
			cout << i+1 << " ";
			break;
		}
	for(int i = n-1 ; i >= 0; i--)
		if (a[i] != b[i]){
			cout << i+1 << " ";
				break;
		}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		slove(a,n);
	}
}
