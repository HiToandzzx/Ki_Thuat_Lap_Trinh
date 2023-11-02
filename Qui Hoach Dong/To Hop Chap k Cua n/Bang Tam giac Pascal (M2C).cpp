#include <bits/stdc++.h>
using namespace std;

int n,k;
int TamGiac[20][20];

void Tinh(int n){
	for(int i=0 ; i<=n ; i++){
		TamGiac[i][0]=1; //Cac phan tu cot 0
		TamGiac[i][i]=1; //Cac phan tu duong cheo chinh	
	}
	for(int i=2 ; i<=n ; i++)
		for(int j=1 ; j<n ; j++){
			TamGiac[i][j] = TamGiac[i-1][j-1] + TamGiac[i-1][j];
		}
}

int main(){
	cout << "Nhap n, k: ";
	cin >> n >> k;
	Tinh(n);
	cout << "To hop chap " << k << " cua " << n << " = " << TamGiac[n][k];
	return 0;
}
