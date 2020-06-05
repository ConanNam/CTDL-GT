#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(10000,true);

void isPrime(){
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(10000) + 1; i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000; j += i)
				prime[j] = false;
		}
	}
}

void numToArray(int a[], int n){
	for(int i = 3; i >= 0; i--){
		a[i] = n % 10;
		n = n/10;
	}
}

int arrayToNum(int a[]){
	int res = 0, p = 1;
	for(int i = 3; i >= 0; i--){
		res += a[i] * p;
		p *= 10;
	}
	return res;
}

int getSlove(int n, int m){
	int a[4];
	int cnt[10005];
	memset(cnt,-1,sizeof(cnt));
	cnt[n] = 0;
	queue<int> que;
	que.push(n);
	while(!que.empty()){
		int s = que.front();
		que.pop();
		for(int i = 0 ; i < 4; i++){
			numToArray(a,s);
			for(int j = 0 ; j < 10; j++){
				a[i] = j;
				int num = arrayToNum(a);
				if(prime[num] && num > 1000 && cnt[num] == -1){
					cnt[num] = cnt[s] + 1; // Thao tac + 1;
					que.push(num);
				}
			}
		}
	}
	return cnt[m];
}

int main(){
	int t;
	cin >> t;
	isPrime();
	while(t--){
		int n, m;
		cin >> n >> m;
		cout << getSlove(n,m) << endl;
	}
}
