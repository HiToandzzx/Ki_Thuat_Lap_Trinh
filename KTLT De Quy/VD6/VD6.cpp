#include <stdio.h>

int x[20], n, p;

void KT_Nghiem(){
	int tong=0;
		for(int k=1 ; k<=n ; k++)
			tong+=x[k];
	if(tong==p){
		printf("\n");
		for(int k=1 ; k<=n ; k++)
			printf("%2d" , x[k]);
	}
}

//Thu xac dinh cac gia tri cua x(i)
void Thu(int i){
	//Duyet mien tri cua x(i) (Trying)
	for(int j=0 ; j<=9 ; j++){
		//Ghi nhan gia tri cho x(i)
		x[i]=j;
			if(i<n)
				//Neu chua du cac thanh phan => xet tiep
				Thu(i+1);
			else
				KT_Nghiem();
				//Tra ve gia tri ban dau (Back Tracking)
				x[i]=0;		
	}
}

int main(){
	int i;
	do{
		printf("Nhap vao n: ");
		scanf("%d",&n);
	}while(n<0 && n>9);
	
	do{
		printf("Nhap vao p: ");
		scanf("%d",&p);
	}while(p<0 && p>9);
	
	KT_Nghiem();
	Thu(1);
	return 0;
}
