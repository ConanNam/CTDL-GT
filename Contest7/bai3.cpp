#include<bits/stdc++.h>
using namespace std;

void slove(string s){
	s += ' ';
	string temp = "";
	for(int i = 0 ; i < s.size(); i++){
		if (s[i] != ' '){
			temp+= s[i];
		}else{
			reverse(temp.begin(),temp.end());
			cout << temp << " ";
			temp = "";
		}
	}
	cout << endl;
}



int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		slove(s);
	}
}
