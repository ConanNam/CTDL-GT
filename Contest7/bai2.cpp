#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;

int top = 0, s[100005];

main(){
	int t;
	cin >> t;
	while( t-- ){
		string a;
		cin >> a;
		if( a == "PUSH" ){
			int n;
			cin >> n;
			top++;
			s[top] = n;
		}
		else if( a == "POP" ){
			if( top > 0 )	top--;
		}
		else if( a == "PRINT" ){
			if( top > 0 ){
				cout << s[top] << "\n";
			}
			else	cout << "NONE\n";
		}
		   
	}
	return 0;
}

