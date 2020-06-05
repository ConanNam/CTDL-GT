#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void genNumWith0And9(){
	queue<string> que;
	que.push("9");
	for(int i = 1; i<= 1000; i++){
		string s1 = que.front();
		que.pop();
		v.push_back(s1);
		string s2 = s1;
		que.push(s1.append("0"));
		que.push(s2.append("9"));
	}
}

void findSmallest(int n){
	for(int i = 0 ; i < v.size(); i++)
		if (stoi(v[i]) % n == 0){
			cout << v[i] << endl;
			break;
		}
}

int main(){
	int t;
	cin >> t;
	genNumWith0And9();
	while(t--){
		int n;
		cin >> n;
		findSmallest(n);
	}
}
