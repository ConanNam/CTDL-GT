#include<bits/stdc++.h>
using namespace std;

int find(int a[], int n, int x){
	if (x > a[n-1])
		return -1;
	vector<int> v(a[n-1]+1,0);
	for(int i = 0 ; i < n; i++)
		v[a[i]]++;
	if (v[x] == 0)
		return - 1;
	else
		return v[x];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , x;
		cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n; i++) cin >> a[i];
		cout << find(a,n,x) << endl;
	}
}
