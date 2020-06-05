#include<bits/stdc++.h>
#include<vector>
#include<math.h>

using namespace std;

int s[205];
int top = 0;

main(){
	bool ck = true;
	while( ck == true ){
		string a;
		cin >> a;
		if( a == "push" ){
			int n;
			cin >> n;
			top++;
			s[top] = n;
		}
		else if( a == "pop" ){
			if( top > 0 )	top--;
			else	cout << "empty\n";
		}
		else if( a == "show" ){
			if( top > 0 ){
				for( int i = 1; i <= top; i++ )	cout << s[i] << " ";
				cout << "\n";
			}
				
			else
				cout << "empty\n";	
		}
		else	ck = false;
	}
	return 0;
}

