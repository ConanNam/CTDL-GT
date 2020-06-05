#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n, int k){
	cout << "Buoc " << k << ": ";
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void slove(int a[], int n){
	int k = 1;
	bool haveSwap = false;
	for(int i = 0 ; i < n - 1; i++){
		haveSwap = false;
		for(int j = 0; j < n - i - 1 ; j++){
			if (a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				haveSwap = true;
			}
		}
		if (haveSwap == false)
			break;
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
