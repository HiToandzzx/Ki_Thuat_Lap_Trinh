#include <stdio.h>
#include <math.h>
float TongS(int n);

int main(){
	int n;	
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("\nS(%d) = %f", n, TongS(n));
	return 0;
}

float TongS(int n){
	if (n==0)
		return 0;
	else
		return sqrt(2+TongS(n-1));
}

