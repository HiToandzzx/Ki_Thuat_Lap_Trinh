#include <stdio.h>

//The tich cua balo
int V = 50;
int gt[] = {5, 1, 7, 4, 3, 8 ,4 ,1};
int tt[] = {40, 50, 30, 20, 10, 40, 30, 20};

//Chi so phan tu cuoi
int n = sizeof(gt) / sizeof(gt[0]-1);

//Trang thai cac vat st[i]=1; vat i duoc bo vao balo
int st[50];
//GT lon nhat cua cac vat bo vao balo
int gtmax=0;
//Trang thai cac vat co gia tri balo MAX
int stl[50];

void KT(){
	int vt=0; //Tong the tich
	int gtt=0; //Tong gia tri
	for(int k=0 ; k<=n ; k++)
		if(st[k]==1){
			vt+=tt[k];
			gtt+=gt[k];
		}
		if(vt<=V)
			if(gtt>gtmax){
				gtmax=gtt;
		//Ghi nhan lai trang thai xep thanh cong
				for(int k=0 ; k<=n ; k++)
					if(st[k]==1)
						stl[k]=st[k];
					else 
						stl[k]=0;
			}
}

void Thu(int i){
	for (int j=0 ; j<=1 ; j++){
		st[i]=j;
		if(i<n)
			Thu(i+1);
		else 
			KT();
			st[i]=0;
	}
}

int main(){
	Thu(0);
	printf("\nGia tri lon nhat cua balo: %d", gtmax);
	printf("\nCac vat duoc chon la: ");
	printf("\n");
		for(int k=0 ; k<=n ; k++)
			if(stl[k]==1){
				printf("\n   Gia tri vat: %d", gt[k]);
				printf("\n   The tich vat: %d", tt[k]);
				printf("\n");
			}
	
}
