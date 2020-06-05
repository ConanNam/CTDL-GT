#include<bits/stdc++.h>
using namespace std;
#define pb push_back
string slove(string s){
	string b="";
	stack <char> st;
	st.push('+');
	for(int i=0;i<s.size();i++){
		if(s[i] == '('){
			if(i == 0 || s[i-1] != '-'){
				if(st.top() == '+') st.push('+');
				else st.push('-');
			}
			else{
				if(st.top() == '+') st.push('-');
				else st.push('+');
			}
		}
		else if(s[i] == ')') st.pop();
		else if(s[i] <= 'z' && s[i] >= 'a') b.pb(s[i]);
		else{
			if(st.top() == '+') b.pb(s[i]);
			else{
				if(s[i] == '+') b.pb('-');
				else b.pb('+');
			}
		}
	}
	return b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		string str1 = slove(s1);
		string str2 = slove(s2);
		if (str1 == str2)
			cout << "YES" <<endl;
		else
			cout << "NO" << endl;
	}
}
