#include<bits/stdc++.h>
using namespace std;

long long getMinString(string s, long k){
	int a[26] = {0};
	for(int i = 0; i < s.size(); i++)
		a[s[i] - 'A']++;
	long long rs = 0;
	priority_queue<int> que;
	if (k >= s.size())
		return 0;
	for(int i = 0; i < 26; i++){
		que.push(a[i]);
	}
	while(k--){
		long long x = que.top();
		que.pop();
		x = x-1;
		que.push(x);
	}
	while(!que.empty()){
		long long x = que.top();
		que.pop();
		rs += x * x;
	}
	return rs;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long k;
		cin >> k;
		string s;
		cin >> s;
		cout << getMinString(s,k) << endl;
	}
}
