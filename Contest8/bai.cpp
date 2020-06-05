#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		queue<int> que;
		while(k--){
			int n;
			cin >> n;
			if (n == 1)
				cout << que.size() << endl;
			else if (n == 2){
				if (que.empty())
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}else if(n == 3){
				int x;
				cin >> x;
				que.push(x);
			}else if (n == 4){
				if(!que.empty())
					que.pop();
			}else if (n == 5){
				if (!que.empty())
					cout << que.front() << endl;
				else
					cout << "-1" << endl;
			}else{
				if (!que.empty())
					cout << que.back() << endl;
				else
					cout << "-1" << endl;
			}
		}
	}
}
