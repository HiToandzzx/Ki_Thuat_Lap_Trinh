#include <bits/stdc++.h>
using namespace std;

int a[20];
int n, k;

void TamGiac(int n, int k){
	a[0]=1;
	for(int i=1 ; i<=n ; i++)
		for(int j=k ; j>0 ; j--)
			a[j] += a[j-1];
}

int main(){
	cout << "Nhap n va k:  ";
	cin >> n >> k;
	TamGiac(n,k);
	cout << "To hop chap " << k << " cua " << n << " = " << a[k];
	return 0;
}
