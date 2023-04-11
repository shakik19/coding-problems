#include <bits/stdc++.h>
using namespace std;

int f(int a){
	if(a == 1){
		return 0;
	}else{
		a += 2;
		cout << a << endl;
		f(a-3);
	}
	return 2;
}

int main(){
	int c = 20;
	int d = f(c);
	cout << d << c << endl;
}