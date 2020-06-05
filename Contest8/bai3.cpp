#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	deque<int> deque;
	while(t--){
		string s;
		cin >> s;
		if (s == "PUSHBACK"){
			int x;
			cin >> x;
			deque.push_back(x);
		}else if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			deque.push_front(x);
		}else if(s == "POPFRONT"){
			if(!deque.empty())
				deque.pop_front();
		}else if (s == "POPBACK"){
			if(!deque.empty())
				deque.pop_back();
		}else if(s == "PRINTFRONT"){
			if (!deque.empty())
				cout << deque.front() << endl;
			else
				cout << "NONE" << endl;
		}else if(s == "PRINTBACK"){
			if (!deque.empty())
				cout << deque.back() << endl;
			else
				cout << "NONE" << endl;
		}
	}
}
