#include<bits/stdc++.h>
using namespace std;

void slove(int a[], int n, int b[], int m){
  vector<int> v1(n + m + 2);
  vector<int> v2(n + m + 2);                   
  vector<int>::iterator it;
  sort (a,a+n);     
  sort (b,b+m);   
  // union
  it=set_union(a, a+n, b, b+m, v1.begin());
	v1.resize(it - v1.begin());
	for(int i = 0 ; i < v1.size(); i++)	cout << v1[i] << " ";
	cout << endl;
  // intersection

  it=set_intersection (a, a+n, b, b+m, v2.begin());
  v2.resize(it-v2.begin());
  for(int i = 0 ; i < v2.size(); i++)	cout << v2[i] << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
	int n , m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0 ; i < n; i++)	cin >> a[i];
	for(int j = 0 ; j < m ; j++) cin >>b[j];
	slove(a,n,b,m);
	}
}
