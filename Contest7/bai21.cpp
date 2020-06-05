#include<bits/stdc++.h>
using namespace std;
void nextGreater(long long a[], int n, int R[]){
	stack<long long> st;
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[i] >= a[st.top()])
			st.pop();
		if (!st.empty())
			R[i] = st.top();
		else
			R[i] = -1;
		st.push(i);
	}
}

void nextSmaller(long long a[], int n,int R[]){
	stack<long long> st;
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[i] <= a[st.top()])
			st.pop();
		if (!st.empty())
			R[i] = st.top();
		else
			R[i] = -1;
		st.push(i);
	}
}

void slove(long long a[], int n){
	int NG[n];
	int NS[n];
	nextGreater(a,n,NG);
	nextSmaller(a,n,NS);
	
	for(int i = 0 ; i < n; i++){
		if (NG[i] != -1 && NS[NG[i]] != -1)
			cout << a[NS[NG[i]]] << " ";
		else
			cout << "-1" << " ";
	}
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
