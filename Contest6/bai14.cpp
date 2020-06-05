#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(1000006,true);

void Prime(){
	for(int i = 2; i <= sqrt(1000000) + 1; i++){
		if (prime[i] == true){
			for(int j = i * i; j <= 1000000; j+=i){
				prime[j] = false;
			}
		}
	}
	/*for(int i = 2; i <= 100; i++){
		if (prime[i] == true)
			cout << i << " ";
	}
	*/
}

int main(){
	int t;
	cin >> t;
	Prime();
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		for(int i = 2; i <= n/2+1; i++){
			if (prime[n-i] == true && prime[i] == true){
				cout << i << " " << n-i << endl;
				break;
			}else
				count++;
			}
			//cout << count << endl;
		if (count >= n/2)
			cout << "-1" << endl;
	}
}
