#include<bits/stdc++.h>
using namespace std;

bool find(string s){
	// create a stack of characters 
	stack<char> Stack; 

	// Iterate through the given expression 
	for (char ch : s) 
	{ 
		// if current character is close parenthesis ')' 
		if (ch == ')') 
		{
			// pop character from the stack 
			char top = Stack.top(); 
			Stack.pop(); 

			// stores the number of characters between a 
			// closing and opening parenthesis 
			// if this count is less than or equal to 1 
			// then the brackets are redundant else not 
			int elementsInside = 0; 
			while (top != '(') 
			{ 
				elementsInside++; 
				top = Stack.top(); 
				Stack.pop(); 
			} 
			if(elementsInside <= 1) { 
				return 1; 
			} 
		} 

		// push open parenthesis '(', operators and 
		// operands to stack 
		else
			Stack.push(ch); 
	} 

	// No duplicates found 
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
