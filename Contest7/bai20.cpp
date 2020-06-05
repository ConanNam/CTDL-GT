#include<bits/stdc++.h>
using namespace std;

void slove(long long a[], int n){
	stack<long long> st;
	long long R[n];
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[i] >= st.top())
			st.pop();
		if (!st.empty())
			R[i] = st.top();
		else
			R[i] = -1;
		st.push(a[i]);
	}
	for(int i = 0; i < n; i++)
		cout << R[i] << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		slove(a,n);
	}
}
