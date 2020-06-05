#include<bits/stdc++.h>
using namespace std;

int maxLen(string s){
	stack<int> st;
	st.push(-1);
	int n = s.size();
	int rs = 0;
	for(int i = 0 ; i < n; i++){
		if (s[i] == '(')
			st.push(i);
			else{
				st.pop();
				if (!st.empty()){
					rs = max(rs, i-st.top());
				}else
					st.push(i);
			}
	}
	return rs;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << maxLen(s) << endl;
	}
}
