#include<bits/stdc++.h>
using namespace std;

string PostflixToInflix(string str){
	stack<string> s;
	int len = str.size();
	for(int i = 0; i < str.size(); i++){
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] =='/'){
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			string temp = '(' + op2 + str[i] + op1 + ')';
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
		cout << PostflixToInflix(s) << endl;
	}
}
