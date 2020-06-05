#include<bits/stdc++.h>
using namespace std;

int minSwap(string s){
	stack<char> st;
	int len = s.size();
	if (len % 2)
		return -1;
	for(int i = 0 ; i < len; i++){
		if (s[i] == ')' && !st.empty()){
			if (st.top() == '(')
				st.pop();
			else
				st.push(s[i]);
		}else
			st.push(s[i]);
	}
	
	int red_len = st.size();
	int n = 0;
	while(!st.empty() && st.top() == '('){
		n++;
		st.pop();
	}
	return(red_len/2 + n % 2);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout << minSwap(s) << endl;
	}
}
