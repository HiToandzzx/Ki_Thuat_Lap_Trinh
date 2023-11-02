#include <stdio.h>

int a[]={5,3,7,8,4,7,6,7,9,7,2,4};
int n=sizeof(a)/sizeof(a[0]);

int Dem(int a[], int l, int r){
	if(r<l)
		return 0;
	else if(l==r)
		if(a[l]==7)
			return 1;
		else
			return 0;
	else{
		int m=(l+r)/2;
		if(a[m]==7)
			return 1+Dem(a,l,m-1)+Dem(a,m+1,r);
		else
			return Dem(a,l,m-1)+Dem(a,m+1,r);
	}
}

int main(){
	printf("\nSo luong phan tu 7 la: %d",Dem(a,0,n-1));
	return 0;
}
