#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int n , k;

bool compare(int i , int j){
	return abs(j - k) > abs(i - k);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		stable_sort(a, a+n, compare);
		for(int i = 0 ; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
