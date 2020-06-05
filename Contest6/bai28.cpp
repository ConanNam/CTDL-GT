#include<bits/stdc++.h>
using namespace std;
void display(int a[], int k){
	cout << "Buoc " << k <<": ";
	for(int i = 0 ; i <= k; i++)
		cout << a[i] << " ";
	cout << endl;
}

void slove(int a[], int n){
	int k = 0;
	cout << "Buoc " << k <<": " << a[0] << endl;
	k++;
	for(int i = 1 ; i < n; i++){
		int j = i - 1;
		int key = a[i];
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		display(a,k);
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
