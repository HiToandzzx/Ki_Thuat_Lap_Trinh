//TIM CAC TRUONG HOP CO TONG = P
#include <stdio.h>

int a[]={50,10,30,70,40,20,80,50};
int n=sizeof(a)/sizeof(a[0])-1;
int P=160;
int b[50];

void KiemTra(){
	int S=0;
	for(int k=0 ; k<=n ; k++)
		if(b[k]==1)
			S+=a[k];
		if(S==P){
			printf("\n===============\n");
			for(int k=0 ; k<=n ; k++)
				if(b[k]==1)
					printf("%3d",a[k]);
		}
}

void Thu(int i){
	for(int j=0 ; j<=1 ; j++){
		b[i]=j;
		if(i<n)
			Thu(i+1);
		else
			KiemTra();
			b[i]=0;	
	}
}

int main(){
	Thu(0);
	return 0;
}
