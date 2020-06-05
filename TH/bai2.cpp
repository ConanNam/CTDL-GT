#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[100005];
ll dp[100006];
void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    dp[1] = a[1];
    dp[2] = max(a[1],a[2]);
    for(int i = 3; i <= n ; i++)
        dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
    cout << dp[n] << '\n';
}

int main(){
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

