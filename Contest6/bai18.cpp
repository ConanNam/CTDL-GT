#include<bits/stdc++.h>
using namespace std;

void slove(vector<long> a, vector<long> b){
	vector<long> :: iterator it;
	it = a.begin();
	a.insert(it,b.begin(),b.end());
	sort(a.begin(),a.end());
	for(int i = 0 ; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<long> a;
		vector<long> b;
		for(int i = 0 ; i < n ; i++){
			long temp;
			cin >> temp;
			a.push_back(temp);
		}
		for(int j = 0 ; j < m; j++){
			long temp;
			cin >> temp;
			b.push_back(temp);
		}
		slove(a,b);
	}
}
