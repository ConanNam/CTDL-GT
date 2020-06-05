#include<bits/stdc++.h>
using namespace std;

int find(int a[], int n){
	int maxNum = *max_element(a, a+n);
	int minNum = *min_element(a,a+n);
	vector<int> v(maxNum+1,0);
	for(int i = 0; i < n; i++)
		v[a[i]]++;
	int count = 0;
	for(int i = minNum; i <= maxNum; i++)
		if (v[i] == 0)
			count++;
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		cout << find(a,n) << endl;
	}
}
