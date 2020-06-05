#include<bits/stdc++.h>
using namespace std;

long long findBDN1(long long s){
	queue<long long> q; 
  
    q.push(1); 
    long long cnt = 0; 
    long long t; 
  
    while (!q.empty()){ 
        t = q.front(); 
        q.pop(); 
  
        if (t <= s){ 
            cnt++; 
  
            q.push(t * 10); 
            q.push(t * 10 + 1); 
        } 
    }
    return cnt; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << findBDN1(n) << endl;
	}
}
