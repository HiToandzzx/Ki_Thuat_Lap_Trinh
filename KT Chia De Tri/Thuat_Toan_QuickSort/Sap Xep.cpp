#include <stdio.h>

int a[] = {10, 30, 15, 12, 45, 32, 18};
int n = sizeof(a)/sizeof(a[0]);


void SapXep(int a[], int left, int right){
	int i, j, m, tam;
	int key;	//Gia tri phan tu lam chuan de so sanh
	if(left < right){
		m=(left+right)/2;	//Vi tri phan tu giua day
		key=a[m];
		i=left;
		j=right;
		while(i<j){
			while(a[i]<key)
				i++;
			while(a[j]>key)
				j--;
			if(i<=j){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
				i++;
				j--;
			}
			//Sap ep tren cac day con
		if(j>left)
			SapXep(a, left, j);
		if(i<right)
			SapXep(a, i, right);
		}
	}	
}

int main(){
	SapXep(a, 0, n-1);
	for(int k=0 ; k<n ; k++)
		printf("%3d", a[k]);
	return 0;
}
