#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n,0);
		for(int i = 0 ; i < n; i++)	a[i] = i + 1;
		int index = 0;
		while(a.size() > 1){
			index = (index + k) % a.size();
			a.erase(a.begin() + index);
		}
		cout << a[0] << endl;
	}
}
