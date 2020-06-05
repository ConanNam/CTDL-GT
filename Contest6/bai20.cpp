#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int l,int r,int x)
{   int mid; 
    while(l<=r)
    {   mid=l+(r-l)/2;
        if(a[mid-1]<x&&x<=a[mid])   return mid-1;
        if(a[mid]<x)    l=mid+1;
        else r=mid-1;
    }
    if(mid==r)  return r;
    return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n; i++)	cin >> a[i];
		sort(a, a+n);
		long long count = 0;
		for(int i = 0 ; i < n-1; i++){
			long long pos = binary(a,i+1,n-1,a[i] + k);
			if (pos != -1)
				count += (pos - i);
		}
		cout << count << endl;
	}
}
