#include <bits/stdc++.h>
using namespace std;

int n;
int D[100];

void scbd(int n){
	D[1]=1;
	D[2]=1;
	D[3]=2;
	D[4]=4;
	for(int k=5 ; k<=n ; k++)
		D[k] = D[k-1] + D[k-3] + D[k-4];
}

int main(){
	cout << "Nhap n: ";
	cin >> n;
	scbd(n);
	cout << "So cach bieu dien: " << D[n];
	return 0;
}
