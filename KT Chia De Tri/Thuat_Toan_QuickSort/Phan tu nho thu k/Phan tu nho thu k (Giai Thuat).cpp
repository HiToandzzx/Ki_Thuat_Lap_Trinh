#include <stdio.h>

int a[] = {10, 15, 12, 7, 3, 18, 50}; // 3, 7, 10, 12, 15, 18, 50
int n = sizeof(a)/sizeof(a[0]);
int k;

int ChiaDoiDay(int a[], int l, int r){
	int i, j, m, tam;
	int key;
	if(l<r){
		m=(l+r)/2;
		key=a[m];
		i=l;
		j=r;
		while(i<j){
			while(a[i]<key)
				i++;
			while(a[j]>key)
				j--;
			if(i<j){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
				i++;
				j--;
			}
			return j;
		}
	}
} 

int PhanTuNhoThu_k(int a[], int l, int r, int k){
	int pos; // Vi tri phan tu nho thu k
	if(k>0 && k<=r-l+1){
		pos = ChiaDoiDay(a, l, r);
		if(pos-l == k-1)
			return a[pos];
		if(pos-l > k-1)
			return PhanTuNhoThu_k(a, l, pos-1, k);
			else return PhanTuNhoThu_k(a, pos+1, r, k-pos+l-1);

	}
	return -100000000;
}

int main(){
	k=3;
	printf("\nPhan tu nho thu %d la: %d",k ,PhanTuNhoThu_k(a, 0, n-1, k));
	return 0;
}
