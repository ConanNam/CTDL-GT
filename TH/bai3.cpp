#include<bits/stdc++.h>
using namespace std;

long long dp[100005];

long long minStep(int n){
	memset(dp,0,sizeof(dp));
    for (int i=0; i<=n; i++) 
        dp[i] = n-i; 
    for (int i=n; i>=1; i--){ 
       if (!(i%2)) 
          dp[i/2] = min(dp[i]+1, dp[i/2]); 
       if (!(i%3)) 
          dp[i/3] = min(dp[i]+1, dp[i/3]); 
    } 
    return dp[1]; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << minStep(n) << endl;
	}
}
