#include <stdio.h>
//Nua tren
int nt[]={3,2,1,4};
//Nua duoi
int nd[]={5,4,2,5};
int x[10];
int sl = sizeof(nt) / sizeof(nt[0]);
int n=sl-1;

void KT_Nghiem(){
	//Tong so nua tren
	int St=0;
	//Tong so nua duoi
	int Sd=0;
	for(int k=0 ; k<=n ; k++)
	//Giu nguyen quan co
		if(x[k]==0){
			St+=nt[k];
			Sd+=nd[k];
		}
	//Xoay quan co lai
		else{
			St+=nd[k];
			Sd+=nt[k];
		}
		if(St==Sd){
			printf("\nCac quan co: ");
			printf("\nNua tren: ");
			for(int k=0 ; k<=n ; k++)
				if(x[k]==0)
					printf("%3d", nt[k]);
				else
					printf("%3d", nd[k]);
					
			printf("\nNua duoi: ");
			for(int k=0 ; k<=n ; k++)
				if(x[k]==0)
					printf("%3d", nd[k]);
				else
					printf("%3d", nt[k]);
			printf("\n");
		}
}

void Thu(int i){
	//Duyet mien tri cua x(i) (Trying)
	for(int j=0 ; j<=1 ; j++){
		//Ghi nhan trang thai quan co
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
	Thu(0);
	return 0;
}

