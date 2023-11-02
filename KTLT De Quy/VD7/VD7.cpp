#include <stdio.h>

//Khoi luong cac qua can
int p[]={0,7,2,4,1,5};
//n la chi so cua qua can cuoi cung
int n = sizeof(p) / sizeof(p[0]) - 1;
int x[20];

void KT_Nghiem(){
	//Tong so KL dia ben trai
	int St=0;	
	//Tong so KL dia ben phai
	int Sp=0;
	for(int k=1 ; k<=n ; k++)
		if(x[k]==-1)
			St+=p[k];
		else if(x[k]==1)
			Sp+=p[k];
	if ((St==Sp) && (St!=0)){
		printf("\n===========================\n");
		printf("\n Dia trai: ");
		for(int k=1 ; k<=n ; k++)
			if(x[k]==-1)
				printf("%5d",p[k]);
				
		printf("\n Dia phai: ");
		for(int k=1 ; k<=n ; k++)
			if(x[k]==1)
				printf("%5d",p[k]);
	}
}

void thu(int i){
	for(int j=-1 ; j<=1 ; j++){
		//Ghi nhan trang thai qua can thu i
		x[i]=j;
		if(i < n)
			thu(i+1);
		else 
			KT_Nghiem();
			x[i]=0;
	}
}

int main(){
	thu(1);
	return 0;
}
