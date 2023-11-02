#include <bits/stdc++.h>
using namespace std;

int n;
int a[20];

void FIBO(int n){
	a[1] = 1;
	a[2] = 1;
	for(int i=3 ; i<=n ; i++)
		a[i] = a[i-1] + a[i-2];
}

int main(){
	cout<<"Nhap n: ";
	cin>>n;
	FIBO(n);
	cout<<"Fibo thu " << n << " = " << a[n];
	return 0;
}


