#include<bits/stdc++.h>
using namespace std;

void genBinaryfrom1toN(int n){
	queue<string> que;
	que.push("1");
	while(n--){
		string s1 = que.front();
		que.pop();
		cout << s1 << " ";
		
		string s2 = s1;
		que.push(s1.append("0"));
		que.push(s2.append("1"));
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		genBinaryfrom1toN(n);
	}
}
