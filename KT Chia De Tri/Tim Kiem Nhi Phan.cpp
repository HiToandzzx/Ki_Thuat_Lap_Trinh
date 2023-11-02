#include <stdio.h>

int a[]={10,13,28,32,46,59,60,80,85,92};
int n=sizeof(a)/sizeof(a[0]);


int TimP(int a[], int l, int r, int X){
	if(r<l)
		return -1;
	else{
		int m=(l+r)/2;
		if(a[m]==X)
			return m;
		else if(a[m]>X)
			return TimP(a,l,m-1,X);
		else 
			return TimP(a,m+1,r,X);
	}
}

int main(){
	int X=28;
	printf("\nVi tri phan tu %d la: %d", X, TimP(a,1,n-1,X));
}
