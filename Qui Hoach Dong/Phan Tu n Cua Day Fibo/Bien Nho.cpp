#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, c;

void Tinh(int n){
	a=1;
	b=1;
	if(n<=2)
		c=1;
	else 
		for(int i=1 ; i<=n-2 ; i++){
			c=a+b;
			a=b;
			b=c;
		}
}

int main(){
	cout<<"Nhap n: ";
	cin>>n;
	Tinh(n);
	cout<<"Fibo thu " << n << " = " << c;
	return 0;
}


