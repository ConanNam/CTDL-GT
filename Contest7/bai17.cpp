#include<bits/stdc++.h>
using namespace std;

int toDigit(char c){
	return c - '0';
}

long long caculated(int a , int b, char c){
	if (c == '*')
		return a * b;
	if (c == '/')
		return a / b;
	if (c == '+')
		return a + b;
	if (c == '-')
		return a - b;
}

long long slove(string s){
	stack <long long> st;
	for(int i =  s.size() - 1 ;i >= 0; i--){
		if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			long long rs = caculated(a,b,s[i]);
			st.push(rs);
		}else{
			int x = toDigit(s[i]);
			st.push(x);
		}
	}
	return st.top();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << slove(s) << endl;
	}
}
