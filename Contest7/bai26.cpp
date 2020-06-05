#include <iostream> 
#include <stack> 
using namespace std; 
  
// An efficient method to calculate stock span values 
// implementing the same idea without using stack 
void calculateSpan(int A[], int n, int ans[]) 
{ 
    // Span value of first element is always 1 
    ans[0] = 1; 
  
    // Calculate span values for rest of the elements 
    for (int i = 1; i < n; i++) { 
        int counter = 1; 
        while ((i - counter) >= 0 && A[i] >= A[i - counter]) { 
            counter += ans[i - counter]; 
        } 
        ans[i] = counter; 
    } 
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++)	cin >> a[i];
	int ans[n];
	calculateSpan(a,n,ans);
	for(int i = 0 ; i < n; i++)
		cout << ans[i] << " ";
}
