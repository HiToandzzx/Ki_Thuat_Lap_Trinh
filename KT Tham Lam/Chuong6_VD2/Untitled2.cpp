#include <stdio.h>
int a[]={17,30,20,10,5,31};
int n = sizeof(a)/sizeof(a[0]);
int cs[20];

int main(){

	for(int i=0 ; i<n ; i++)
		cs[i]=i;
	for(int i=0 ; i<n-1 ; i++)
		for(int j=i+1 ; j<n ; j++){
			if(a[cs[i]]>a[cs[j]]){
				int tam=cs[i];
				cs[i]=cs[j];
				cs[j]=tam;
			}
		}
		for(int j=0 ; j<n ; j++)
			printf("\n Phan tu thu: %d , gia tri: %d",cs[j], a[cs[j]]);
			return 0;
}
