#include <bits/stdc++.h> 
using namespace std; 
  
#include <iostream> 
using namespace std; 
  
int max(int m, int n) {  return (m > n)? m: n; } 

int *add(int A[], int B[], int m, int n) 
{ 
   int size = max(m, n); 
   int *sum = new int[size]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<m; i++) 
     sum[i] = A[i]; 
  
   // Take ever term of first polynomial 
   for (int i=0; i<n; i++) 
       sum[i] += B[i]; 
  
   return sum; 
} 
  
// A utility function to print a polynomial 
void printPoly(int poly[], int n) 
{ 
    for (int i=0; i<n; i++) 
    { 
       cout << poly[i]; 
       if (i != 0) 
        cout << "x^" << i ; 
       if (i != n-1) 
       cout << " + "; 
    } 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
	}
}
