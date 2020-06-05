#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int d[10] = {0};
    while(n > 0){
        d[n % 10]++;
        n /= 10;
    }
    for(int i = 0 ; i <= 9 ; i++)
        if((i <= 5 && d[i] > 1 )|| (i > 5 && d[i] > 0))
            return false;
    return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l , r;
		cin >> l >> r;
		map <int,int> mp;
		for(int i  = l; i <= r; i++){
			if(check(i))
				mp[i]++;
		}
		cout << mp.size()<< endl;
	}
}
