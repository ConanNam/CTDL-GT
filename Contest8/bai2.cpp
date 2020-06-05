#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	queue<int> que;
	while(t--){
		string s;
		cin >> s;
		if (s == "PUSH"){
			int x;
			cin >> x;
			que.push(x);
		}else if (s == "POP"){
			if (!que.empty())
				que.pop();
		}
		else if (s == "PRINTFRONT"){
			if (!que.empty())
				cout << que.front() << endl;
			else
				cout << "NONE" << endl;
		}
	}
}
