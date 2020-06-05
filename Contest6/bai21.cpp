#include<bits/stdc++.h>
using namespace std;
bool sortdes(const pair<int,int> &a,const pair<int,int> &b){ 
	if(a.first == b.first){
	    return a.second < b.second;
	} 
	return a.first > b.first;
} 
int main(){
	int n, a[10005], t; cin >> t;
	while(t--){
		cin >> n; 
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		vector< pair <int,int> > vt(n);
		int dem = 1, k = 0;
		for(int i = 1; i < n; i++){
			if(a[i] == a[i - 1]) dem++;
			else{
				vt[k].first = dem; vt[k].second = a[i - 1]; 
				k++; dem = 1;
			}
		}
		vt[k].first = dem; vt[k].second = a[n - 1]; k++;
		sort(vt.begin(), vt.end(), sortdes);
		for(int i = 0 ; i < k;  i++){
			for(int j = 1; j <= vt[i].first; j++){
				cout << vt[i].second << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
