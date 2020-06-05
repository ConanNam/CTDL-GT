#include<bits/stdc++.h>
using namespace std;

int getMinOperation(int x, int y){
	int a[20000], step = 0;
	for(int i = 0 ; i <= 20000; i++)	a[i] = INT_MAX;
	a[x] = 0;
	queue<int> que;
	que.push(x);
	while(a[y] == INT_MAX){
		step = que.front();
		que.pop();
		if (step - 1 > 0 && a[step - 1] == INT_MAX){
			a[step - 1] = min(a[step - 1],a[step] + 1);
			que.push(step - 1);
		}
		if (step * 2 < 20000 && a[step * 2] == INT_MAX){
			a[step * 2] = min(a[step * 2], a[step]  +1);
			que.push(step * 2);
		}
	}
	return a[step] + 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x , y;
		cin >> x >> y;
		cout << getMinOperation(x,y) << endl;
	}
}
