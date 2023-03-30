#include "bits/stdc++.h"
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0, arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 1; i <= 5; ++i)
	{
		if((sum+i)%(n+1)!=1){
			cout << i << endl;
			return 0;
		}
	}
}