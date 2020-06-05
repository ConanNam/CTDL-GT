#include<bits/stdc++.h>
using namespace std;

string preToInflix(string str){
	stack<string> s;
	int len = str.size();
	for(int i = len - 1; i>= 0; i--){
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] =='/'){
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			string temp = '(' + op1 + str[i] + op2 + ')';
			s.push(temp);
		}else{
			s.push(string(1,str[i]));
			//cout << s.top() << " ";
		}
	}
	return s.top();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << preToInflix(s) << endl;
	}
}
