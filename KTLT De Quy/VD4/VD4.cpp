#include <stdio.h>
int a[] = {15, 18, 2, 19, 13, 7, 8};
int kt = sizeof(a) / sizeof(a[0]);

int MIN(int a, int b){
	if(a<b)
		return a;
	else 
		return b;
}

int NhoNhat(int a[], int n){
	if(n==0)
		return a[0];
	else
		return MIN(NhoNhat(a,n-1),a[n]);
}

int main(){
	int n=kt-1;
	printf("So nho nhat la: %d", NhoNhat(a,n));
	
}
