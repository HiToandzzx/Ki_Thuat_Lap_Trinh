#include <stdio.h>

int a[] = {17, 3, 14, 16, 18, 15};
int kt = sizeof(a) / sizeof(a[0]);

//n la chi so phan tu cuoi cung
int TongChan(int a[], int n){
	if(n<0)
		return 0;
	else if(a[n]%2==0)
		return a[n] + TongChan(a, n-1);
	else 
		return TongChan(a, n-1);
}

int main(){
	int n=kt-1;
	printf("\nTong cac phan tu chan = %d", TongChan(a,n));
}
