#include <stdio.h>
#include <math.h>

float TongS(int n, int k){
	if (k==n)
		return sqrt(n);
	else
		return sqrt(k + TongS(n,k+1));
		
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("S(%d) = %f", n, TongS(n,1));
}
