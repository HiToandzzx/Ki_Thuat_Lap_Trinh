//HANH TRINH KI TU

#include <stdio.h>
#include <string.h>

char a[50];
FILE *f;
char KiTu[50][50];
int l;
int gh[]={0,1};
int gc[]={1,0};

void readf(){
	f=fopen("C:\\Garena\\kytu.inp", "r");
	if(f==NULL)
		printf("\nKhong mo duoc File!");
	else{
		fscanf(f, "%s", &a);
		printf("\nXau can doc la: %s \n", a);
		fclose(f);
	}
}

void Luoi(){
	l=strlen(a);
	for(int i=0 ; i<l ; i++)
		for(int j=0 ; j<l-i ; j++)
			KiTu[i][j]=a[i+j];
}

void InLuoi(){
	for(int i=0 ; i<l ; i++){
		for(int j=0 ; j<l-i ; j++)
			printf("%c", KiTu[i][j]);
			printf("\n");
	}
}

void Thu(int x, int y, int dai){
	for(int i=0 ; i<=1 ; i++){
		printf("\n");
		x+=gh[i];
		y+=gc[i];
		char tam=KiTu[x][y];
		KiTu[x][y]='*';
		dai--;
		if(dai>1)
			Thu(x,y,dai);
		else 
			InLuoi();
			dai++;
			KiTu[x][y]=tam;
			x-=gh[i];
			y-=gc[i];
	}
}

int main(){
	readf();
	Luoi();
	InLuoi();
	KiTu[0][0]='*';
	Thu(0,0,l);
	return 0;
}
