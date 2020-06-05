#include<bits/stdc++.h>
using namespace std;

int check(char c){
    if (c == '(' || c == ')')
        return 0;
    else if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/' || c == '%')
        return 2;
    else if (c == '^') 
        return 3;
    return -1;
}

void slove(string s){
	stack <char> st;
    string res = "";
    for(int i = 0 ; i < s.length() ; i++){
        char c = s[i];
        if(c != ' '){
            if(('A' <= c && c <= 'Z' )|| ('a' <= c && c <= 'z'))
                res += c;
        else if(c == '(') st.push(c);
        else if(c == ')'){
            while(st.top() != '('){
                char y = st.top();
                res += y;
                st.pop();
            }
            if(st.top() == '(')
                st.pop();
        }
        else{
            if(st.empty() || st.top() == '(' || check(c) > check(st.top()))
                st.push(c);
            else{
                while(!st.empty() && check(c) <= check(st.top())){
                    char y = st.top();
                    res += y;
                    st.pop();
                }
                st.push(c);
            }
        }
        }
    }
    while(!st.empty()){
        char y = st.top();
        res += y;
        st.pop();
    }
	for(int i = 0 ; i < res.size(); i++){
		if (res[i] != '(')	cout << res[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		slove(s);
	}
}
