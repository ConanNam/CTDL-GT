#include<bits/stdc++.h>
using namespace std;

long find(long a[], int n){
	long min_sum = a[0] + a[1];
	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i + 1; j < n; j++)
			if (abs(min_sum) > abs(a[i] + a[j]))
				min_sum = a[i] + a[j];
	}
	return min_sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		cout << find(a,n) << endl;
	}
}

