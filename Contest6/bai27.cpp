#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n, int k){
	cout << "Buoc " << k <<": ";
	for(int i = 0 ; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void slove(int a[], int n){
	int k = 1;
	for(int i = 0 ; i < n-1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if (a[min_index] > a[j])
				min_index = j;
		}
		swap(a[i],a[min_index]);
		display(a,n,k);
		k++;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++)	cin >> a[i];
	slove(a,n);
}
