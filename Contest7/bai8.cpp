#include<bits/stdc++.h>
using namespace std;

string slove(string str){
	stack <int> st;
	st.push(0);
	string s = "";
	for(int i = 0 ; i < str.size(); i++){
		if (str[i] == '+'){
			// neu st.top == 1 lat toan tu . VD: '+' -> '-'
			if (st.top() == 1)
				s += '-';
			else
				s += '+';
		}else if (str[i] == '-'){
			if (st.top() == 1)
				s += '+';
			else
				s += '-';
		}else if (str[i] == '('){
			if (str[i-1] == '-'){
				int x = (st.top() == 1) ? 0 : 1;
				st.push(x);
			}else if (str[i-1] == '+')
				st.push(st.top());
		}else if (str[i] == ')')
			st.pop();
		else
			s += str[i];
	}
	return s;
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
