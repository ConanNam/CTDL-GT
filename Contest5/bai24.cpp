#include<bits/stdc++.h>
using namespace std;
long long dp[30][30];

long long count_move_back(int n, int m){
	dp[0][0] = 0;
	for(int i = 1; i <= m; i++)	dp[0][i] = 1;
	for(int i = 1; i <= n; i++)	dp[i][0] = 1;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
	}
	return dp[n][m];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		cout << count_move_back(n,m) << endl;
	}
}
