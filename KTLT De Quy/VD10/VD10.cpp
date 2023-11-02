#include <stdio.h>

int a[50];
int n=5; //chieu dai doan duong

void KT_Nghiem()
{
	int S=0, k=1;
	while(a[k]>0){
		S+=a[k];
		k++;
	}
	if(S==n){
		printf("\n");
		for(int t=1 ; t<k ; t++)
			printf("%2d",a[t]);
	}
}

void Thu(int i, int dai)
{
	for(int j=1 ; j<=2 ; j++){
		a[i]=j;
		if (dai-a[i] > 0) 
			Thu(i+1, dai-j);
		else 
			KT_Nghiem();
			a[i]=0;
	}
}

int main()
{
	printf("\nCac cach buoc di cua robot trong %d met la: \n",n);
	Thu(1, n);
	return 0;
	
}
