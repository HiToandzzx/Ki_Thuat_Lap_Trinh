#include <bits/stdc++.h>
using namespace std;

int n;

int fibo(int n){
	if(n<=2)
		return 1;
	else 
		return fibo(n-1)+fibo(n-2);
}

int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Fibo thu " << n << " = " << fibo(n);
	return 0;
}
