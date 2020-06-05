#include<bits/stdc++.h>
using namespace std;

long findIndex(long a[], long l, long h, long x){
	if (l > h) return -1;
	long mid = (l + h)/2;
	if (a[mid] == x) return mid;
	
	if (a[l] <= a[mid]){
		if (x >= a[l] && x <= a[mid])
			return findIndex(a,l,mid-1,x);
		return findIndex(a,mid+1,h,x);
	}
	
	if (x >= a[mid] && x <= a[h])
		return findIndex(a,mid+1,h,x);
	return findIndex(a,l,mid-1,x);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, x;
		cin >> n >> x;
		long a[n];
		for(long i = 0 ; i < n; i++)	cin >> a[i];
		cout << findIndex(a,0,n-1,x) + 1 << endl;
	}
}
