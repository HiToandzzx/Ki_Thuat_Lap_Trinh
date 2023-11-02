#include <stdio.h>
#define For(i,a,b) for(i=a ; i<=b ; i++)
int a[20][20];

//KHAI BAO KIEU DU LIEU FILE
FILE *f;
int d, c;
int i, j;

int main(){
	f=fopen("C:\\Garena\\mt.inp", "r"); //MO FILE DE DOC
	if(f = NULL)
		printf("\nMo file khong thanh cong!");
	else{
		fscanf(f, "%d", &d);
		fscanf(f, "%d", &c);
		For(i,1,d)
			For(j,1,c)
				fscanf(f, "%d", &a[i][j]);
		//HIEN THI MANG 
		For(i,1,d){
			For(j,1,c)
				printf("%5d", a[i][j]);
				printf("\n");
		}
		fclose(f);
	}
	return 0;
}
