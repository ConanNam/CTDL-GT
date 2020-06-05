#include<bits/stdc++.h>
using namespace std;

bool find(string s){
	stack<char> st;
	for(int i = 0 ; i < s.length(); i++){
		if (s[i] == ')'){
			char top = st.top(); // lay ki tu dau tien ra;
			st.pop();
			int elementInside = 0;
			while(top != '('){
				elementInside++;
				top = st.top();
				st.pop();
			}
			if (elementInside <= 1){
				return true;
			}
		}
		else
			st.push(s[i]);
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if (find(s))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
