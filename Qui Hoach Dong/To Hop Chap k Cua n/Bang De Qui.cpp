#include <bits/stdc++.h>
using namespace std;

int n,k;

int ToHop(int n, int k){
	if(k==0 || k==n)
		return 1;
	else 
		return ToHop(n-1, k-1) + ToHop(n-1, k);
}

int main(){
	cout << "Nhap k va n:  ";
	cin >> k >> n;
	cout << "To hop chap " << k << " cua " << n << " = " << ToHop(n,k);
	return 0;
}
