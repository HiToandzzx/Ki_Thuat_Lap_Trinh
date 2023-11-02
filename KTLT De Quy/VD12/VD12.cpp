#include <stdio.h>

int mt[9][8]=
{ 
	0 ,0,0,0,0,0,0, 0,
	
	0 ,1,0,0,1,0,0, 0,
	0 ,0,0,1,1,1,0, 0,
	0 ,0,0,0,1,1,1, 0,
	0 ,0,1,1,0,0,1, 0,
	0 ,0,1,1,0,0,0, 0,
	0 ,1,0,1,0,0,1, 0,
	0 ,0,0,0,0,0,0, 0,
	
	0 ,0,0,0,0,0,0, 0,
};

int k=1;

void Thu(int i, int j, int k){
	if(mt[i][j]==1){
		mt[i][j]=k;
		Thu(i-1,j,k);
		Thu(i+1,j,k);
		Thu(i,j-1,k);
		Thu(i,j+1,k);
	}
}

int main(){
	int sh=7, sc=6;
	for(int x=1 ; x<=sh ; x++)
		for(int y=1 ; y<=sc ; y++)
			if(mt[x][y]==1){
				k++;
				Thu(x,y,k);
			}
	for(int x=1 ; x<=sh ; x++){
		for(int y=1 ; y<=sc ; y++)
			printf("%4d", mt[x][y]);
			printf("\n");
			printf("\n");
	}
	return 0;	
}
