#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long steps = 0;
		while(n > 1){
			if (n % 3 == 0){
				n = n / 3;
			} else if (n % 2 == 0)
				n = n / 2;
			else
				n--;
			steps++;
		}
		cout << steps << endl;
	}
}
