#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int getSlove(int n){
	set <int> vis;
    queue <pii> q;
    vis.insert(n);
    q.push({n,0});
    while(!q.empty()){
        pii s = q.front(); q.pop();
        if(s.first == 1) // Neu N = 1 tra lai so buoc
            return s.second;
        if(s.first - 1 == 1) // Neu con 1 buoc de N = 1;
            return s.second + 1;
        // Thuc hien thao tac (a)
        if(vis.find(s.first - 1) == vis.end()){
            vis.insert(s.first - 1);
            q.push({s.first - 1, s.second + 1});
        }
        // Thuc hien thao tac (b)
        for(int i = 2 ; i * i <= s.first ; i++){
            if(s.first % i == 0){
                if(vis.find(s.first / i) == vis.end()){
                    q.push({s.first / i, s.second + 1});
                    vis.insert(s.first / i);
                }
            }
        }
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << getSlove(n) << endl;
	}
}
