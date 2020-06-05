#include<bits/stdc++.h>
using namespace std;

int mod(string s, int n){
	int r = 0;
	for(int i = 0 ; i < s.size(); i++){
		r = r * 10 + (s[i] - '0');
		r %= n;
	}
	return r;
}

string findBDN2(int n){
	queue<string> que;
	set<int> visted;
	string t = "1";
	que.push(t);
	while(!que.empty()){
		t = que.front();
		que.pop();
		
		int r = mod(t,n);
		
		if (r == 0)
			return t;
		
		else if(visted.find(r) == visted.end()){
			visted.insert(r);
			que.push(t + '0');
			que.push(t + '1');
		}
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << findBDN2(n) << endl;
	}
}
