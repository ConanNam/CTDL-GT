#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
         
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		
		int rs = binarySearch(a,0,n-1,x);
		if (rs == -1)
			cout << "-1" << endl;
		else
			cout << "1" << endl;
	}
}
